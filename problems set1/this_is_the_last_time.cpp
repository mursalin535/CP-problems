#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int a[n][3];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> a[i][j];
            }
        }

        int prev_k = -1;  // initialize to something different from k
        while (prev_k != k) {
            prev_k = k;
            bool any_update = false;

            for (int i = 0; i < n; i++) {
                if (k >= a[i][0] && k <= a[i][1] && a[i][2]>k) {
                    k = a[i][2];  // Use reali (a[i][2]), not a[i][0]
                    any_update = true;
                }
            }

            if (!any_update) break; // no more updates possible
        }

        cout << k << endl;
    }
    return 0;
}
