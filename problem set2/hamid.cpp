#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;

        if (x == 1 || x == n) {
            cout << 1 << endl;
        } 
        else {
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (s[i] == '#') {
                    count++;
                }
            }

            if (count == 0) {
                cout << 1 << endl;
            } 
            else {
                int r = -1, l = -1;

                // Find nearest obstacle to the right
                for (int i = x - 1; i < n; i++) {
                    if (s[i] == '#') {
                        r = i;
                        break;
                    }
                }

                // Find nearest obstacle to the left
                for (int i = x - 1; i >= 0; i--) {
                    if (s[i] == '#') {
                        l = i;
                        break;
                    }
                }

                // Distances to nearest obstacle or wall
                int ldis = (l == -1) ? 0 : ((x - 1) - l - 1);
                int rdis = (r == -1) ? 0 : (r - (x - 1) - 1);

                int leftpath = x;
                int rightpath = n - x + 1;

                cout << max((leftpath - ldis), (rightpath - rdis)) << endl;
            }
        }
    }
    return 0;
}
