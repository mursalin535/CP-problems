#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<string>s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int used=0,i=0,x=0;
        while(1){
            used=used+s[i].length();
            if(used<=m){
                 i++;x++;
            }
            if(used>m || i==n){
                break;
            }
           
        }
        cout<<x<<endl;
    }
}
