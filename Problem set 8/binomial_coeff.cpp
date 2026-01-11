#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;cin>>t;
    vector<long long >k(t);
    for(long long  i=0;i<2;i++){
        for(long long  j=0;j<t;j++){
            cin>>k[j];
        }
   
}
long long mx = *max_element(k.begin(), k.end());
    long long mod = 1e9 + 7;
    
    vector<long long> ans(mx + 1);
    ans[0] = 1; // ✅ 2^0 = 1, not 2
    
    // ✅ Apply modulo during calculation
    for(long long i = 1; i <= mx; i++){
        ans[i] = (ans[i-1] * 2) % mod;
    }
    
    // Output
    for(long long i = 0; i < t; i++){
        cout << ans[k[i]] << endl;
    }
    return 0;
}