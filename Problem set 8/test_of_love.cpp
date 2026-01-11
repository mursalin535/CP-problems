#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m,k;cin>>n>>m>>k;
        string s;cin>>s;

        vector<int>dp(n+1);

        dp[n]=0;

        int j=n-1;
        for(int i=0;i<n;i++){
            if(s[i]=='W')dp[j--]=dp[j+1]+1;
            else if(s[i]=='C')dp[j--]=INT_MAX;
            else{
                int x=m;int y=dp[j+1];
                int z=2;
                while(z<=x && j+z<=n){
                    y=min(y,dp[j+z]);
                    z++;
                }
                dp[j--]=y;
            }
        }
        if(dp[0]<=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}