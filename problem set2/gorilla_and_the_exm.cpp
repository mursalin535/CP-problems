#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        if(k>=n)cout<<1<<endl;

        else{

        map<int, int> freq;
        for (int x : a) freq[x]++;  // only stores used keys

        vector<int> counts;
        for (auto [val, f] : freq) {
            counts.push_back(f);
        }

        sort(counts.begin(), counts.end());

        for (int i = 0; i < counts.size(); i++) {
            if (k >= counts[i]) {
                k -= counts[i];
                counts[i] = 0;
            }
        }

        int ans = 0;
        for (int f : counts) {
            if (f > 0) ans++;
        }

        cout << ans << endl;
    }}

    return 0;
}
