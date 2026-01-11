#include<bits/stdc++.h>
using namespace std;

int  main(){
    long long t;cin>>t;
    while(t--){
        long long n,k;cin>>n>>k;
    long long remain=n-(n-k);
    if(remain%2==0){
        if((remain/2)%2==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
       long long major=remain/2 + 1;
       if(major%2==0){
           if(n%2!=0)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
       else{
           if(n%2!=0)cout<<"NO"<<endl;
           else cout<<"YES"<<endl;
       }
    }}
    return 0;

}