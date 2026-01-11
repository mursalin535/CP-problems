#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool flag = true;

        for (long long i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                flag = false;
                break;
            }
            a[i] -= a[i - 1];
        }

        cout << (flag ? "YES\n" : "NO\n");
    }

    return 0;
}
