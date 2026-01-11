#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long n, c, x;
        cin >> n >> c >> x;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long m = n * 2;
        long long total = accumulate(a.begin(), a.end(), 0LL) * c;

        if (total < x) {
            cout << 0 << "\n";
            continue;
        }

        long long totalforx = 0;
        long long ans = 0;
        long long z = 0;

        for (long long i = 0; i < m; i++) {
            totalforx += a[i % n];   // simulate b[i]

            while (totalforx >= x && z <= i) {
                ans++;
                totalforx -= a[z % n]; // simulate b[z]
                z++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
