    #include <bits/stdc++.h>
    using namespace std;

    long long fact(int x) {
        long long res = 1;
        for (int i = 1; i <= x; i++) res *= i;
        return res;
    }

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;

        while (t--) {
            int n, k;
            cin >> n >> k;

            n = min(n, 7);
            long long m = fact(n);

            for (int d = 1; d <= 9; d += 2) {
                long long mod = 0;
                for (int i = 0; i < m; i++) {
                    mod = (mod * 10 + k) % d;
                }
                if (mod == 0) {
                    cout << d << " ";
                }
            }
            cout << "\n";
        }

        return 0;
    }
