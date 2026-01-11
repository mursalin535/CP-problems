#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        int turn=0;
        int ans=0;
        for(int i=0;i<n;i++){
            turn++;
            int x;cin>>x;
            (turn%2!=0)?ans+=x:ans-=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}