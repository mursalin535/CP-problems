#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int mx = *max_element(a.begin(), a.end());
        vector<int> freq(mx + 2, 0);

        for (int x : a) freq[x]++;

        int mex = 0;
        while (freq[mex] > 0) mex++; // find first number not present

        cout << mex << endl;
    }
    return 0;
}
