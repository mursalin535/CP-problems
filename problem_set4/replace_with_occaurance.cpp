#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];

        // group indices by b[i]
        map<int, vector<int>> groups;
        for (int i = 0; i < n; i++) {
            groups[b[i]].push_back(i);
        }

        vector<int> a(n, 0);
        int label = 1;
        bool ok = true;

        for (auto &kv : groups) {
            int k = kv.first;
            auto &idx = kv.second;

            if (idx.size() % k != 0) {
                ok = false;
                break;
            }

            for (int i = 0; i < idx.size(); i++) {
                a[idx[i]] = label;
                if ((i + 1) % k == 0) label++;
            }
        }

        if (!ok) {
            cout << -1 << "\n";
        } else {
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
