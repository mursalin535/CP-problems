#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  // reading each row as a string
        }

        bool possible = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '1') {
                    bool validFromCol = true;
                    for (int k = 0; k <= i; k++) {
                        if (a[k][j] != '1') {
                            validFromCol = false;
                            break;
                        }
                    }

                    bool validFromRow = true;
                    for (int k = 0; k <= j; k++) {
                        if (a[i][k] != '1') {
                            validFromRow = false;
                            break;
                        }
                    }

                    if (!validFromCol && !validFromRow) {
                        possible = false;
                        break;
                    }
                }
            }
            if (!possible) break;
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
