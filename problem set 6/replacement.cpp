#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s, r;
        cin >> s >> r;

        int one = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') zero++;
            else one++;
        }

        bool possible = true;
        for (int i = 0; i < n - 1; i++) {
            if (one == 0 || zero == 0) {
                cout << "NO" << endl;
                possible = false;
                break;
            } else {
                if (r[i] == '0') one--;
                else zero--;
            }
        }

        if (possible)
            cout << "YES" << endl;
    }
    return 0;
}
