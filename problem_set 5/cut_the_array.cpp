#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(a[0]%3==a[n-1]%3){
           int i=1;
           bool flag=false;
           while(n-i>1){
            if(a[0]%3!=a[n-i]%3){
                
                flag=true;
                break; 
            }
            i++;

           }
           if(flag)cout<<1<<" "<<n-(i-1)<<endl;
           else cout<<0<<" "<<0<<endl;
        }
        else{
            cout<<1<<" "<<n-1<<endl;
        }
    }
    return 0;
}