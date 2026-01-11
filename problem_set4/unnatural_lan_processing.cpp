#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        string output = "";
        int i = 1;

        while (i < n) {
            if (s[i] == 'a' || s[i] == 'e') {
                output.push_back(s[i - 1]);
                output.push_back(s[i]);

                if (i + 2 < n && s[i + 2] != 'a' && s[i + 2] != 'e') {
                    output.push_back(s[i + 1]);
                    output.push_back('.');
                    i += 3;
                } else {
                    output.push_back('.');
                    i += 2;
                }
            } else {
                i++;
            }
        }
        output.pop_back();
        if(s[n-1]!='a' && s[n-1]!='e') output.push_back(s[n-1]);

        cout << output << endl;
    }
    return 0;
}
