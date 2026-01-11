#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;

        ll ans = r - l + 1; // total numbers in [l, r]

        ll c1 = 0;

        // Singles: 2, 3, 5, 7
        c1 += (r / 2) - ((l - 1) / 2);
        c1 += (r / 3) - ((l - 1) / 3);
        c1 += (r / 5) - ((l - 1) / 5);
        c1 += (r / 7) - ((l - 1) / 7);

        // Pairs
        c1 -= (r / 6)  - ((l - 1) / 6);   // 2*3
        c1 -= (r / 10) - ((l - 1) / 10);  // 2*5
        c1 -= (r / 14) - ((l - 1) / 14);  // 2*7
        c1 -= (r / 15) - ((l - 1) / 15);  // 3*5
        c1 -= (r / 21) - ((l - 1) / 21);  // 3*7
        c1 -= (r / 35) - ((l - 1) / 35);  // 5*7

        // Triples
        c1 += (r / 30)  - ((l - 1) / 30);   // 2*3*5
        c1 += (r / 42)  - ((l - 1) / 42);   // 2*3*7
        c1 += (r / 70)  - ((l - 1) / 70);   // 2*5*7
        c1 += (r / 105) - ((l - 1) / 105);  // 3*5*7

        // Quadruple
        c1 -= (r / 210) - ((l - 1) / 210);  // 2*3*5*7

        // Good numbers = total - bad
        ans = ans - c1;

        cout << ans << "\n";
    }

    return 0;
}
