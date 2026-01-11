#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        bool flag=true;
        for(int i=0;i<n;i++){
            if(abs(a[i]-(i+1))>1){
                flag=false;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}