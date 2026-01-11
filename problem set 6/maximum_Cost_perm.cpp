#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> present(n + 1, 0);
        for (int i = 0; i < n; i++) {
            if (a[i] >= 1 && a[i] <= n)
                present[a[i]]++;
        }

        vector<int> x;
        for (int i = 1; i <= n; i++) {
            if (present[i] == 0) {
                x.push_back(i);
            }
        }

        sort(x.begin(), x.end(), greater<int>());
        if (x.size() % 2 != 0 && x.size() > 1) {
            swap(x[0], x[x.size() / 2]);
        }

        int j = 0;
        for (int i = 0; i < n && j < (int)x.size(); i++) {
            if (a[i] == 0) {
                a[i] = x[j++];
            }
        }

        vector<pair<int, bool>> ok(n);
        for (int i = 0; i < n; i++) {
            ok[i] = {a[i], (a[i] == i + 1)};
        }

        int first = -1, second = -1;
        for (int i = 0; i < n; i++) {
            if (!ok[i].second) {
                if (first == -1) first = i;
                second = i;
            }
        }

        int ans = 0;
        if (first != -1 && second != -1)
            ans = second - first + 1;

        cout << ans << endl;
    }
    return 0;
}
