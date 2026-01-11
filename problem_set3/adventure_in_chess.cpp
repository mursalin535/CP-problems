#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s; cin >> s;

        int x = 0, y = 0;
        bool flag = false;

        for (int i = 0; i < n; i++) {
            switch (s[i]) {
                case 'N': y++; break;
                case 'S': y--; break;
                case 'E': x++; break;
                case 'W': x--; break;
            }
            if (x == a && y == b) {   // reached target
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << "YES\n";
        } else {
            // check collinearity
            if ((a * y == b * x) && (x != 0 || y != 0)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
