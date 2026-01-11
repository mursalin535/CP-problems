#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  n;cin>>n;
        long long  ans=0;
        for(long long  i=1;i<=n;i++){
            long long  h0,h1,n0,n1;cin>>h0>>h1>>n0>>n1;
            if(h1>n1){
              ans+=h0+(h1-n1);
            }
            else if(h0>n0){
                ans+=(h0-n0);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}