// compile with: g++ -std=c++17 -O2 -pipe
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin>>t)) return 0;
    while(t--){
        int n,m; cin>>n>>m;
        vector<vector<int>> sets(n);
        vector<vector<int>> occ(m+1); // occ[x] = list of set indices containing x
        long long Ltotal = 0;
        for(int i=0;i<n;++i){
            int l; cin>>l; 
            Ltotal += l;
            sets[i].resize(l);
            for(int j=0;j<l;++j){
                int x; cin>>x;
                sets[i][j] = x;
                occ[x].push_back(i);
            }
        }
        bool impossible = false;
        bool has3 = false;
        for(int x=1;x<=m;++x){
            if(occ[x].empty()) { impossible = true; break; }
            if((int)occ[x].size() >= 3) { has3 = true; }
        }
        if(impossible){
            cout<<"NO\n";
            continue;
        }
        if(has3){
            cout<<"YES\n";
            continue;
        }
        // Now each element occurs either 1 or 2 times.
        vector<char> forced(n, 0);
        vector<char> covered(m+1, 0);
        // mark sets that are forced because they uniquely contain some element
        for(int x=1;x<=m;++x){
            if((int)occ[x].size() == 1){
                int s = occ[x][0];
                forced[s] = 1;
            }
        }
        // mark covered elements by including all forced sets
        for(int i=0;i<n;++i){
            if(forced[i]){
                for(int x : sets[i]) covered[x] = 1;
            }
        }
        // check if every element is covered now
        bool some_uncovered = false;
        for(int x=1;x<=m;++x){
            if(!covered[x]) { some_uncovered = true; break; }
        }
        if(!some_uncovered){
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
    return 0;
}
