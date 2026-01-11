#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n%2!=0)cout<<0<<endl;
        else {
           int ans=0;
           if(n/2 >0)ans++;
           if((n/2)/2 >0)ans+=(n/2)/2;
          
           cout<<ans<<endl;
        }
    }
    return 0;
}