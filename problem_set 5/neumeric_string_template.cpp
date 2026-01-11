#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int m;
        cin >> m;
        while (m--) {
            string s;
            cin >> s;

            if ((int)s.length() != n) {
                cout << "NO\n";
                continue;
            }

            // mapping int -> char and char -> int
            unordered_map<int, char> intToChar;
            unordered_map<char, int> charToInt;

            bool ok = true;
            for (int i = 0; i < n; i++) {
                int num = a[i];
                char ch = s[i];

                if (intToChar.count(num) && intToChar[num] != ch) {
                    ok = false;
                    break;
                }
                if (charToInt.count(ch) && charToInt[ch] != num) {
                    ok = false;
                    break;
                }

                intToChar[num] = ch;
                charToInt[ch] = num;
            }

            cout << (ok ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
