#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
            long long n,m;cin>>n>>m;
            vector<long long>a(n);
            long long b;
            for(long long i=0;i<n;i++)cin>>a[i];
            cin>>b;

            a[0]=min(a[0],b-a[0]);

            for(long long i=1;i<n-1;i++){
                long long x=b-a[i];
                if(x<a[i] && x>=a[i-1] && x<=a[i+1]){
                    a[i]=x;
                }
            }
            long long x=b-a[n-1];
            if(x<a[n-1] && x>=a[n-2]){
                a[n-1]=x;
            }
            bool flag=true;
            for(long long i=1;i<n;i++){
                if(a[i]<a[i-1]){
                    flag=false;
                    break;
                }
            }
            if(flag)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
    }
    return 0;
}