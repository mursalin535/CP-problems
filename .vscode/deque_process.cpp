#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        string ans;
        int i = 0, j = n - 1;
        for (int turn = 1; turn <= n; ++turn) {
            if (turn % 2 != 0) {
                if (a[i] < a[j]) {
                    ans.push_back('L');
                    i++;
                } else {
                    ans.push_back('R');
                    j--;
                }
            } else {
                if (a[i] > a[j]) {
                    ans.push_back('L');
                    i++;
                } else {
                    ans.push_back('R');
                    j--;
                }
            }
        }
        cout << ans << endl;
    }
}
