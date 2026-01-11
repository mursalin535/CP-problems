#include<bits/stdc++.h>
using namespace std;

int left(int i, int a) {
    return (i - 1) * a;
}

int right(int i, int n, int a) {
    return (n - i) * a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Check if all elements are already equal
        bool all_equal = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                all_equal = false;
                break;
            }
        }
        if (all_equal) {
            cout << "0\n";
            continue;
        }

        // Precompute prefix and suffix arrays
        vector<bool> prefix(n, false), suffix(n, false);
        prefix[0] = true; // No elements to the left of a[0]
        for (int i = 1; i < n; ++i) {
            prefix[i] = (a[i] == a[i-1]) && prefix[i-1];
        }
        suffix[n-1] = true; // No elements to the right of a[n-1]
        for (int i = n-2; i >= 0; --i) {
            suffix[i] = (a[i] == a[i+1]) && suffix[i+1];
        }

        int mincost = INT_MAX;
        for (int i = 0; i < n; ++i) {
            int cost = 0;
            if (!prefix[i]) {
                cost += left(i + 1, a[i]);
            }
            if (!suffix[i]) {
                cost += right(i + 1, n, a[i]);
            }
            if (cost < mincost) {
                mincost = cost;
            }
        }
        cout << mincost << "\n";
    }
    return 0;
}