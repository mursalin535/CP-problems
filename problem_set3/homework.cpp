#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string a, b, c;
        cin >> a;
        
        int m; 
        cin >> m;
        cin >> b >> c;

        int j = 0;
        for (int i = 0; i < c.length(); i++) {
            if (c[i] == 'V') {
                a.insert(a.begin(), b[j++]); // push_front equivalent
            } else {
                a.push_back(b[j++]);
            }
        }
        cout << a << endl;
    }
    return 0;
}
