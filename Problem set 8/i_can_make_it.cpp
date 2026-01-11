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

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int current = a[k - 1];
        sort(a.begin(), a.end());

        int mx = a.back();
        
        // If already at max, answer is YES
        if (current == mx) {
            cout << "YES\n";
            continue;
        }

        int water = 1;
        bool possible = true;

        while (current < mx) {
            // Check if we've run out of water
            if (water > current + 1) {
                possible = false;
                break;
            }

            int scope = (current + 1) - water;
            int nxt = current + scope;

            // Find the largest value we can reach
            auto it = upper_bound(a.begin(), a.end(), nxt);
            
            if (it == a.begin()) {
                // No valid position
                possible = false;
                break;
            }
            
            --it; // Go to largest element <= nxt
            int new_current = *it;
            
            if (new_current <= current) {
                // Can't make progress
                possible = false;
                break;
            }
            
            int water_inc = new_current - current;
            water += water_inc;
            current = new_current;
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}