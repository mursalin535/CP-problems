#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        string s;cin>>s;

        vector<int>needs(7,m);

        for(int i=0;i<n;i++){
            int x=s[i]-'A';
            needs[x]--;
        }

        int ans=0;
        for(int i=0;i<7;i++){
            if(needs[i]>0) ans+=needs[i];
        }

        cout << ans << "\n";
    }
}