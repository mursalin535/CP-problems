#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string t;cin>>t;
        int ptr=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                if(ptr<t.size()){
                    s[i]=t[ptr];
                    
                }
                else s[i]='a';
            }
            if(ptr<t.size() && s[i]==t[ptr])ptr++;
        }
        if(ptr<t.size())cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<s<<endl;}
    }
}