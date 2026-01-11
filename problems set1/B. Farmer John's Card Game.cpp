#include <bits/stdc++.h>

using namespace std;

int find(int **a, int val, int n, int m) {  // Changed to pointer-to-pointer for 2D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == val) {  // Fixed bracket typo
                return i;
            }
        }
    }
    return -1;  // Added return for case where val is not found
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int **a = new int*[n];  // Dynamically allocate 2D array
        for (int i = 0; i < n; i++) {
            a[i] = new int[m];
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        bool flag = true;
        for (int i = 0; i < n; i++) {
            int row = find(a, i, n, m);
            if (row == -1) {  // Handle case where value not found
                flag = false;
                break;
            }
            for (int j = 0; j < m; j++) {
                if (a[row][j] % n == i) {
                    continue;
                }
                else {
                    flag = false;
                    break;
                }
            }
            if (!flag) break;
        }
        if (!flag) {
            cout << -1 << endl;
        }
        else {
            for (int i = 0; i < n; i++) {
                int row = find(a, i, n, m);
                cout << row + 1 << " ";  // Output the row index (1-based)
            }
            cout << endl;  // Added missing semicolon and newline
        }
        // Deallocate memory to prevent leaks
        for (int i = 0; i < n; i++) {
            delete[] a[i];
        }
        delete[] a;
    }
    return 0;
}