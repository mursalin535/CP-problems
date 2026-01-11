#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int k,a,b,x,y;
    cin>>k>>a>>b>>x>>y;
    int f,s,sf,ss;
    (x<y)?(f=x,s=y,sf=a,ss=b):(f=y,s=x,sf=b,ss=a);
    int count=0;
    if(k>=sf){
        count=((k-sf)/f)+1;
        k=k-(count*f);
    }
    if(k>=ss){
        count+=((k-ss)/s)+1;
        k=k-(count*s);
    }
    cout<<count<<endl;
 }
    return 0;
}