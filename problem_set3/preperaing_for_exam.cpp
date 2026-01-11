#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        int n,m,k;cin>>n>>m>>k;
        vector<int> list(m);
        for(int i=0;i<m;i++) cin>>list[i];
        unordered_set<int> known;   // faster than vector+find
        for(int i=0;i<k;i++){
            int x;cin>>x;
            known.insert(x);
        }

        string s(m,'0');

        if(n-k>1){
            // stays all '0'
        }
        else if(n==k){
            s = string(m,'1');
        }
        else{
            for(int i=0;i<m;i++){
                int x=list[i];
                if(!known.count(x)){  // O(1) lookup
                    s[i]='1';
                }
            }
        }
        cout<<s<<"\n";
    }
}
