#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s; cin >> s;

        int i = 0, used = 0;
        while (i < n) {
            if (s[i] == '0') {
                int count = 1;
                int j = i + 1;
                while (count < m && j < n && s[j] == '0') {
                    count++;
                    j++;
                }
                j--;
                if (count == m) {
                    used++;
                    i = j + k;
                } else {
                    i = j + 1;  // fixed
                }
            } else {
                i++;
            }
        }
        cout << used << "\n";
    }
}
