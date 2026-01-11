#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int a,b,c;cin>>a>>b>>c;
    if((a+b+c)%3!=0)cout<<"NO"<<endl;
    else{
        int x=(a+b+c)/3;
        (a>x || b>x)?cout<<"NO"<<endl:cout<<"YES"<<endl;
    }
 }
    return 0;
}