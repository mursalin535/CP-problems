#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        long long base = a[0];
        vector<long long> not_divisible;

        // Find numbers not divisible by the smallest
        for (int i = 0; i < n; i++) {
            if (a[i] % base != 0)
                not_divisible.push_back(a[i]);
        }

        if (not_divisible.empty()) {
            cout << "YES\n";
            continue;
        }

        // Try the smallest not-divisible element as the second base
        long long base2 = not_divisible[0];
        bool ok = true;
        for (auto x : not_divisible) {
            if (x % base2 != 0) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
