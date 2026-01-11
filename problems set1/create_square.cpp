#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int l,r,d,u;cin>>l>>r>>d>>u;
    (l==r &&d==u & l==u)?cout<<"YES"<<endl:cout<<"NO"<<endl;
 }
    return 0;
}