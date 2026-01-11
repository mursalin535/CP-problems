#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
        if(y-x==1 || (y-x==-8 && x>=9) || (x%9==0 && y==1))cout<<"Yes\n";
        else cout<<"No\n";
    }
}