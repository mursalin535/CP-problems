#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<int> a(n);
        for (long long i = 0; i < n; i++) cin >> a[i];

        long long maxVal = INT_MIN;
        for (long long i = 0; i < n; i++) {
            if (a[i] > maxVal) maxVal = a[i];
            if ((i + 1) % 2 == 0) a[i] = maxVal;
        }

        long long ans = 0;

        for (long long i = 2; i < n - 1; i += 2) {
            if (a[i] >= a[i + 1] || a[i] >= a[i - 1]) {
                ans += a[i] - min(a[i + 1], a[i - 1]) + 1;
            }
        }

        if (a[0] >= a[1]) {
            ans += a[0] - a[1] + 1;
        }

        if (n % 2 != 0) {
            if (a[n - 1] >= a[n - 2]) {
                ans += a[n - 1] - a[n - 2] + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
