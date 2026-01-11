#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<int> a(n);
        for(long long i=0;i<n;i++)cin>>a[i];
        long long ans=0;
        
        long long total=a[0];
        if(a[0]==0)ans++;
       int mx=a[0];
        for(long long i=1;i<n;i++){
          
            total+=a[i];
            long long x=total;
          mx=max(mx,a[i]);
            x=x-mx;
            if(x==mx)ans++;

        }
        cout<<ans<<"\n";
    }
    return 0;
}