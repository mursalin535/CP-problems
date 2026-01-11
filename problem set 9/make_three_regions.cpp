#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> a(2);
        cin >> a[0] >> a[1];

        int ans = 0;

        // Only columns 1 to n-2 can split into 3 regions
        for (int j = 1; j < n - 1; j++) {
            for (int r = 0; r < 2; r++) {
                int o = 1 - r; // other row

                // STRICT pattern that creates exactly 3 components
                if (
                    a[r][j] == '.' &&
                    a[o][j] == '.' &&
                    a[o][j - 1] == '.' &&
                    a[o][j + 1] == '.' &&
                    a[r][j - 1] == 'x' &&
                    a[r][j + 1] == 'x'
                ) {
                    ans++;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
