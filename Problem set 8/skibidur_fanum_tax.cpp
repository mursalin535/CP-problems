#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        long long B = b[0];

        // prev = chosen value for previous index
        long long prev = min(a[0], B - a[0]);

        bool ok = true;

        for (int i = 1; i < n; i++) {
            long long x = a[i];
            long long y = B - a[i];

            long long cur = LLONG_MAX;

            if (x >= prev) cur = min(cur, x);
            if (y >= prev) cur = min(cur, y);

            if (cur == LLONG_MAX) {
                ok = false;
                break;
            }

            prev = cur;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
