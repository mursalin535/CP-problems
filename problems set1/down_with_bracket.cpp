#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    string s;cin>>s;
    bool flag;
    for(int i=0;i<s.length();i++){
        if(s[i]==')'){
            while(s[i]==')'){
                i++;
            }
            if(i==s.length()){
                flag=false;
                break;
            }
            else{
                flag=true;
                break;
            }
        }
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }
    return 0;
}