#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int peak = 0, i = 0;

        while(i < n) {
            if(a[i] == 0) {
                int j = i;
                int count = 0;

                while(j < n && a[j] == 0) {
                    count++;
                   
                    if(count == k) break;
                     j++;
                }

                if(count == k) {
                    peak++;
                    i = j + 2; 
                } else {
                    i = j + 1;
                }
            } else {
                i++;
            }
        }

        cout << peak << endl;
    }
    return 0;
}
