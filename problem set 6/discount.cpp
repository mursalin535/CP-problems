#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
        long long n,k;cin>>n>>k;
        vector<int>a(n);
        vector<int>b(k);
        
        long long cost=0;
        
        for(long long i=0;i<n;i++){
            cin>>a[i];
            cost+=a[i];
        }

        for(long long i=0;i<k;i++){
            cin>>b[i];
        }


          long long j=n-1;

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        for(long long i=0;i<k && j>=0;i++){

            long long x=j-(b[i]-1);
            if(x<0)break;

            cost-=a[x];
            j-=b[i];
        }

        cout<<cost<<endl;
    }
    return 0;
}