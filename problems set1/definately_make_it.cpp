#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int current = a[k - 1], water = 1;
        bool flag = false;
        int max_val = *max_element(a.begin(), a.end()); // renamed here

        while (current >= water) {
            int remain = current - water + 1;
            current = current + remain;
            if (find(a.begin(), a.end(), current) != a.end()) {
                if (current == max_val) { // also renamed here
                    flag = true;
                    break;
                } else {
                    water=water+remain;
                    continue;
                }
            } else {
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
