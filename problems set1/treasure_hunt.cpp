#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
   long long x,y,a;cin>>x>>y>>a;
   a=a+1;
   long long rounds = (long long)ceil((double)a/(x+y));
   (rounds%2!=0)?cout<<"NO"<<endl:cout<<"YES"<<endl;
 }
    return 0;
}