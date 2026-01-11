#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
        long long n,a,b,c;cin>>n>>a>>b>>c;
        long long sum=a+b+c,day=n/sum;
        if(n%sum==0)cout<<day*3<<endl;
        else if(n%sum<=a)cout<<day*3+1<<endl;
        else if(n%sum<=a+b)cout<<day*3+2<<endl;
        else cout<<day*3+3<<endl;
    }
    return 0;
}