#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    vector<long long>p(n);
    vector<long long> q(n);

    for(int i=0;i<n;i++)cin>>p[i];
       for(int i=0;i<n;i++)cin>>q[i];

       long long val,mx=LLONG_MIN;
       long long x=998244353;

       for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            long long a=pow(2,p[j]);
            long long b=pow(2,q[i-j]);
            val=a+b;
            if(val>mx){
                mx=val;
            }
        }
        cout<<mx%x<<" ";
        mx=LLONG_MIN;
       }
       cout<<endl;

 }
    return 0;
}