#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<int> freq(10, 0);

        for (int i = 0; i < 10; i++) {
            int x = s[i] - '0';  
            freq[x]++;
        }

        for (int i = 9; i >= 0; i--) {
            if (freq[i] != 0) {
                cout << to_string(i);
                freq[i]--;
            }
            else {
                int j = i + 1;
                while (1) {
                    if (freq[j] != 0) break;
                    else j++;
                }
                cout << to_string(j);
                freq[j]--;
            }
        }
        cout << endl;
    }
    return 0;
}
