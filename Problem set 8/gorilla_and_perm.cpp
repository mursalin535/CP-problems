#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m,k;cin>>n>>m>>k;

        vector<bool>check(n,false);

        vector<int>F;
        vector<int>G;

        for(int i=1;i<=n;i++){
            if(i>=k){
                F.push_back(i);
                check[i-1]=true;
            }
            if(i<=m){
                G.push_back(i);
                check[i-1]=true;
            }
        }

        sort(F.begin(),F.end(),greater<int>());
        sort(G.begin(),G.end());

        for(int i=0;i<F.size();i++){
            cout<<F[i]<<" ";
        }

        for(int i=1;i<=n;i++){
            if(!check[i-1]){
                cout<<i<<" ";
            }
        }

        for(int i=0;i<G.size();i++){
            cout<<G[i]<<" ";
        }

        cout<<endl;

        
    }
    return 0;
}