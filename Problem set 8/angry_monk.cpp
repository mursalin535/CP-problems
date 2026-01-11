#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  n,k;cin>>n>>k;

        vector<long long >a(k);
        for(long long  i=0;i<k;i++)cin>>a[i];

        long long  mx=*max_element(a.begin(),a.end());
        long long  mx_index = max_element(a.begin(), a.end()) - a.begin();

        long long  ones=0;

        for(long long  i=0;i<k;i++){
            if(a[i]==1)ones++;
        }

        long long  ans=0;
        for(long long  i=0;i<k;i++){
            if(i!=mx_index && a[i]!=1){
                ans=ans+a[i]+a[i]-1;
            }
        }
if(mx==1)cout<<ans+ones-1<<endl;

    else cout<<ans+ones<<endl;

    }
    return 0;
}