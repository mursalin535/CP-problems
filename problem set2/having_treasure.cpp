#include<bits/stdc++.h>

using namespace std;

int  main(){
    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;
        string s;cin>>s;
        long long down=0,up=0;
        for(long long i=0;i<n;i++){
            if(s[i]=='-')up++;
            else down++;
        }
        long long ans=((up/2)*(up-(up/2)))*down;
        cout<<ans<<endl;
    }
}