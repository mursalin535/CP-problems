#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;
        long long gc = __gcd(a, b);  // 🔥 built-in C++ GCD
        cout << ((a / gc <= k && b / gc <= k) ? 1 : 2) << endl;
    }
    return 0;
}
