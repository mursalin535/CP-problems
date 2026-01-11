#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long  t;
    cin >> t;

    while (t--) {
        long long  n;
        cin >> n;

        vector<pair<long long ,long long >> v(n);
        for (long long  i = 0; i < n; i++) {
            long long  x;
            cin >> x;
            v[i] = {x, i};
        }

        sort(v.begin(), v.end(),
             [](const pair<long long ,long long >& a, const pair<long long ,long long >& b) {
                 if (a.first != b.first)
                     return a.first > b.first;   // descending by value
                 return a.second < b.second;    // ascending by index
             });

        long long  sum = v[0].second;

        for (long long  i = 1; i < n; i++) {
            long long  y = v[i].second + i;
            sum = min(sum, y);
        }

        cout << sum << "\n";
    }

    return 0;
}
