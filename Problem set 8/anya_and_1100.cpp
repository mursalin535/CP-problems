#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        unordered_set<int> pos; // stores start indices of "1100"

        // initial detection
        for (int i = 0; i + 3 < n; i++) {
            if (s[i] == '1' && s[i+1] == '1' &&
                s[i+2] == '0' && s[i+3] == '0') {
                pos.insert(i);
            }
        }

        int q;
        cin >> q;

        while (q--) {
            int x, y;
            cin >> x >> y;
            x--; // 0-based index

            // remove affected positions
            for (int i = x - 3; i <= x; i++) {
                if (i >= 0 && i + 3 < n) {
                    pos.erase(i);
                }
            }

            // apply update
            s[x] = char(y + '0');

            // recheck affected positions
            for (int i = x - 3; i <= x; i++) {
                if (i >= 0 && i + 3 < n) {
                    if (s[i] == '1' && s[i+1] == '1' &&
                        s[i+2] == '0' && s[i+3] == '0') {
                        pos.insert(i);
                    }
                }
            }

            // answer
            if (!pos.empty())
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
