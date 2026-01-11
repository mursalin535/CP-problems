#include<bits/stdc++.h>
using namespace std;    


int main(){
    int t;cin>>t;
    while(t--){
        int n,m,x,y;cin>>n>>m>>x>>y;
        int cross=0;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            if(a<=y)cross++;
        }
        for(int i=0;i<m;i++){
            int b;cin>>b;
            if(b<=x)cross++;
        }
        cout<<cross<<endl;
    }
    return 0;
}