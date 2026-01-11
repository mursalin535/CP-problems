#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n==2){
        for(int i=1;i<=n;i++){
            if(i%2!=0)cout<<-1<<" ";
            else cout<<2<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=1;i<n;i++){
            if(i%2!=0)cout<<-1<<" ";
            else cout<<3<<" ";
        }

        if(n%2==0)cout<<2<<endl;
        else cout<<-1<<endl;
    }
}
    return 0;
}