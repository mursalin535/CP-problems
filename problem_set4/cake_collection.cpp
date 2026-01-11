#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
        long long n,m;cin>>n>>m;
        vector<long long> a(n);
        for(long long i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end(),greater<long long>());
        long long total=0,i=0;
        while(m>0 && i<n){
            total=total+a[i]*m;
            i++;
            m--;
        }
        cout<<total<<endl;
    }
    return 0;
}