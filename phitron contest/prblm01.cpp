#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long  long> a(n);
        for (long  long i = 0; i < n; i++) cin >> a[i];

        vector<long  long> b(n);
        for (long  long i = 0; i < n; i++) {
            b[i] = a[i] % 10;
        }

        vector<long  long> temp;
        for (long  long i = 0; i < n; i++) {
            temp.push_back(b[i]);
            sort(temp.begin(), temp.end());

            long  long x = i + 1;
            if (x % 2 != 0) {
                cout << temp[x / 2] << " ";
            } else {
                cout << min(temp[x / 2], temp[x / 2 - 1]) << " ";
            }
        }
        cout << endl;
    }
}
