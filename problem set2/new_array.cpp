#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k,p;cin>>n>>k>>p;
        if(abs(k)<=p && k!=0){
            cout<<1<<endl;
        }
        else if(k==0)cout<<0<<endl;
        else{
            int c=(abs(k)%p==0)?abs(k)/p : abs(k)/p +1;
            if(c<=n)cout<<c<<endl;
            else cout<<-1<<endl;
        }
    }
}
