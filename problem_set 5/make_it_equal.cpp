#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n, k; 
        cin >> n >> k;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        unordered_map<long long,int> freq;

        for (auto x : a) {
            long long r = x % k;
            freq[min(r, k - r)]++;
        }
        for (auto x : b) {
            long long r = x % k;
            freq[min(r, k - r)]--;
        }

        bool ok = true;
        for (auto &p : freq) {
            if (p.second != 0) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
