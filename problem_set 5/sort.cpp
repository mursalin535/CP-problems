#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        while (q--) {
            int l, r;
            cin >> l >> r;

            // extract substrings (convert to 0-indexed)
            string c = a.substr(l - 1, r - l + 1);
            string d = b.substr(l - 1, r - l + 1);

            // sort both substrings
            sort(c.begin(), c.end());
            sort(d.begin(), d.end());

            int ans = 0;
            for (int i = 0; i < (int)c.size(); i++) {
                if (c[i] != d[i]) ans++;
            }

            cout << ans << "\n";
        }
    }
    return 0;
}
