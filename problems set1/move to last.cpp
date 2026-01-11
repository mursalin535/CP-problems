#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); // Faster I/O
    cin.tie(NULL);                   // Faster I/O

    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        for(long long int i = 0; i < n; i++) {
            cin >> a[i];
        }

 
        vector<long long int> suf(n);
        suf[0] = a[n - 1];
        for(long long int i = 1; i < n; i++){
            suf[i] = suf[i - 1] + a[n - i - 1];
        }

        vector<long long int> pref_max(n);
        pref_max[0] = a[0];
        for(long long int i = 1; i < n; i++){
            pref_max[i] = max(pref_max[i - 1], a[i]);
        }

       
        cout << pref_max[n - 1] << " ";

        for(long long int i = 1; i < n; i++){
           
            cout << suf[i - 1] + pref_max[n - i - 1] << " ";
        }

        cout << endl;
    }
    return 0;
}