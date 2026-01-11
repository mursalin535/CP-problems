#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,q;cin>>n>>q;
        string s;cin>>s;

        vector<int>arr(q);
        for(int i=0;i<q;i++) cin>>arr[i];

        for(int i=0;i<q;i++){
            int j=0,ans=0,x=arr[i];
            while(x!=0){
                if(s[j]=='A'){
                    x=x-1;
                    j++;
                    ans++;
                }
                else{
                    x=x/2;
                    j++;
                    ans++;
                }
                if(j==n)j=0;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}