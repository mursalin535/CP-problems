#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zeros = 0;
        for (char c : s) {
            if (c == '0') zeros++;
        }
        int ones_in_first = 0;
        for (int i = 0; i < zeros; i++) {
            if (s[i] == '1') ones_in_first++;
        }
        cout << ones_in_first << endl;
    }
    return 0;
}