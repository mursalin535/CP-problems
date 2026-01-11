#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t; cin >> t;
    while (t--) {
        long long n, m; 
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        // Process the matrix a
        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < m; j++) {
                bool ok = true;
                vector<int> b;   // RESET for every cell (moved inside loop)

                if (i - 1 >= 0) {
                    if (ok && a[i][j] > a[i - 1][j]) {
                        b.push_back(a[i - 1][j]);
                    } else {
                        ok = false;
                    }
                }
                if (ok && i + 1 < n) {
                    if (a[i][j] > a[i + 1][j]) {
                        b.push_back(a[i + 1][j]);
                    } else {
                        ok = false;
                    }
                }
                if (ok && j - 1 >= 0) {
                    if (a[i][j] > a[i][j - 1]) {
                        b.push_back(a[i][j - 1]);
                    } else {
                        ok = false;
                    }
                }
                if (ok && j + 1 < m) {
                    if (a[i][j] > a[i][j + 1]) {
                        b.push_back(a[i][j + 1]);
                    } else {
                        ok = false;
                    }
                }

                if (ok && !b.empty()) {
                    long long mx = *max_element(b.begin(), b.end());
                    a[i][j] = mx;
                }
            }
        }

        for (long long i = 0; i < n; i++) {
            for (long long j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
