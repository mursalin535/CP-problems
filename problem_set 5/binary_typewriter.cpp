#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int index_1 = -1, index_2 = -1;

        // Find first '1'
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                index_1 = i;
                break;
            }
        }
        s=s+'1';

        // Find "01" after first '1'
        for (int i = index_1 + 1; i < n; i++) {
            if (s[i] == '0' && s[i + 1] == '1') {
                index_2 = i;
                break;
            }
        }

        string s2;

        if (index_1 != -1 && index_2 != -1) {
            // Before index_1
            for (int i = 0; i < index_1; i++) s2.push_back(s[i]);

            // Reverse from index_1 to index_2
            for (int i = index_2; i >= index_1; i--) s2.push_back(s[i]);

            // After index_2
            for (int i = index_2 + 1; i < n; i++) s2.push_back(s[i]);
        } else {
            // No modification
            s2 = s;
        }

        // Compute answer
        int ans = (s2[0] == '0') ? 1 : 2;
        for (int i = 1; i < n; i++) {
            if (s2[i] == s2[i - 1]) ans++;
            else ans += 2;
        }

        cout << ans << endl;
    }
    return 0;
}
