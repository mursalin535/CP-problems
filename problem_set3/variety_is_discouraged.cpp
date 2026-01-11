#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        // Frequency of each element in whole array
        unordered_map<int,int> freq;
        for (int x : a) freq[x]++;

        int bestLen = 0, bestL = -1, bestR = -1;
        int l = 0;

        // sliding window
        for (int r = 0; r < n; r++) {
            if (freq[a[r]] > 1) {
                // skip duplicates (they can’t be inside valid subarray)
                l = r + 1;
                continue;
            }
            // valid candidate
            int len = r - l + 1;
            if (len > bestLen) {
                bestLen = len;
                bestL = l;
                bestR = r;
            }
        }

        if (bestLen == 0) cout << 0 << "\n";
        else cout << bestL + 1 << " " << bestR + 1 << "\n"; // 1-based indexing
    }
    return 0;
}
