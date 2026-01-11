#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long ans = 0;
        for (long long i = 0; i < n - 1; i += 2) {
            long long x = a[i + 1] - a[i];
            ans = max(ans, x);
        }

        cout << ans << endl;
    }
    return 0;
}
