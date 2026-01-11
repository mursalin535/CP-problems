#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i]; // read full row as string
        }

        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k) {
                cout << grid[i][j]; // just take top-left of each block
            }
            cout << "\n";
        }
    }
    return 0;
}
