#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;

        vector<int>p;

        for(int i=0;i<n;i++){
            if(s[i]=='0')
            p.push_back(i+1);
        }

        cout<<p.size()<<endl;
        for(int i=0;i<p.size();i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}