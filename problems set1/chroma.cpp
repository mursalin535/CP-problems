#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        if (n == 1) {
            cout << 0 << endl;
        }
        else if (n == x) { // ✅ FIXED: only true when x == n
            for (int i = 0; i < n; i++) {
                cout << i << " ";
            }
            cout << endl;
        } 
        else {
            for (int i = 0; i < n; i++) {
                if (i != x) cout << i << " ";
            }
            cout << x << endl;  // ✅ x added at the end
        }
    }
    return 0;
}
