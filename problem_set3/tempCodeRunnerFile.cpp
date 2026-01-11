#include<bits/stdc++.h>

using namespace std;

int  main(){
 long long  t;cin>>t;
        while(t--){
 long long  l,r;cin>>l>>r;
 long long  df=r-l;
 long long  ans=0;
    while(ans*(ans-1)/2<=df){
        ans++;
    }
    cout<<ans-1<<endl;
        }
    
}