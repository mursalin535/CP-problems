#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long sum=0;
        for(long long i=0;i<n;i++){
            long long x;cin>>x;
            sum+=x;
        }
        long long root=sqrt(sum);
        if(root*root==sum)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}