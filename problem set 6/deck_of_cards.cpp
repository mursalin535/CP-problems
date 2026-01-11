#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int min_top = 0, min_bottom = 0;
        for (char c : s) {
            if (c == '0') min_top++;
            else if (c == '1') min_bottom++;
        }
        int A = min_top;
        int B = k - min_bottom;
        string ans;
        for (int i = 1; i <= n; i++) {
            int low = i - (n - k);
            int high = i - 1;
            if (low <= high) {
                if (A >= low && B <= high) {
                    ans += '+';
                } else if (A > high || B < low) {
                    ans += '-';
                } else {
                    ans += '?';
                }
            } else {
                ans += '-';
            }
        }
        cout << ans << endl;
    }
    return 0;
}