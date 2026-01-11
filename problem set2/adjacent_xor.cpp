#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        bool flag=true;
        for(int i=n-2;i>=0;i--){
            if(a[i]!=b[i]){
                if(b[i]!=a[i]^a[i+1]){
                    flag=false;
                    break;
                }
                else{
                    a[i]^=a[i+1];
                }
            }
        }
        if(!flag)cout<<"NO\n";
        else{
            (a[n-1]==b[n-1])?cout<<"YES\n":cout<<"NO\n";
        }
    }
}