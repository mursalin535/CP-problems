#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m,k;cin>>n>>m>>k;
        vector<int> a(n);
        vector<int> b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];

        set<int>fromA;
        set<int>fromB;

        for(int i=0;i<n;i++){
            if(a[i]>=1 && a[i]<=k){
                fromA.insert(a[i]);
            }
        }
        for(int i=0;i<m;i++){
            if(b[i]>=1 && b[i]<=k){
                fromB.insert(b[i]);
            }
        }

        int inA=fromA.size();
        int inB=fromB.size();

        int mx=max(*max_element(fromA.begin(), fromA.end()), *max_element(fromB.begin(), fromB.end()));
        vector<int>countA(mx+1,0);
        int common=0;

        for(int x : fromA){
            countA[x]++;
        }
        for(int x : fromB){
            if(countA[x]>0){
                common++;
                countA[x]--;
            }
        }

        int takeA=inA-common;
        int takeB=inB-common;

        if(takeA>(k/2) || takeB>(k/2)){
            cout<<"NO"<<endl;
            continue;
        }

        int x=common-((k/2)-takeA);
        takeB+=x;

        if(takeB==(k/2))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}