#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
    int ans=0;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
          
            if(a[i]==k)ans++;
        }
     
        vector<int>check(k,0);
        for(int i=0;i<n;i++){
            if(a[i]<k){
                check[a[i]]++;
            }}
            bool flag=true;
            int count_zero=0;
            for(int i=0;i<k;i++){
                if(check[i]==0){
                    flag=false;
                    count_zero++;
                    
                }
            }
            if(flag)cout<<0+ans<<endl;
            else {
                if(ans>=count_zero)cout<<ans<<endl;
                else cout<<ans+(count_zero-ans)<<endl;
            }

            
        }
      
        
    
    return 0;
}