#include <bits/stdc++.h>
using namespace std;

// Convert decimal to binary string
string toBinary(long long  x) {
    string res = "";
    while (x > 0) {
        res += (x % 2) + '0';
        x /= 2;
    }
    reverse(res.begin(), res.end());
    return res.empty() ? "0" : res;
}

// Convert binary string to decimal
long long toDecimal(const string &b) {
    long long res = 0;
    for (char c : b) {
        res = res * 2 + (c - '0');
    }
    return res;
}

int main() {
    long long t; cin >> t;
    while (t--) {
        long long x; cin >> x;
        string b = toBinary(x);

        string y(b.length(), '0'); // initialize with '0'

        // set first '1' to '1'
        for (long long i = 0; i < (int)b.length(); i++) {
            if (b[i] == '1') {
                y[i] = '1';
                break;
            }
        }

        // set first '0' to '1'
        for (long long i = 0; i < (int)b.length(); i++) {
            if (b[i] == '0') {
                y[i] = '1';
                break;
            }
        }

        long long ans = toDecimal(y);

        if (ans < x) cout << ans << endl;
        else cout << -1 << endl;
    }
    return 0;
}
