#include<bits/stdc++.h>
using namespace std;

int  main(){
    long long  t;cin>>t;
    while(t--){
        long long  n,s,m;
        cin>>n>>s>>m;
        long long  prev=0;
        bool possible=false;
        for(long long  i=0;i<n;i++){
            long long  x,y;cin>>x>>y;
            if((x-prev)>=s)possible=true;
            prev=y;
        }
        if(possible)cout<<"YES"<<endl;
        else {
            if((m-prev)>=s)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}