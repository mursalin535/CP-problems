#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int sum=0,two=0,three=0;
        for(int i=0;i<s.length();i++){
            sum+=s[i]-'0';
            if(s[i]=='2')two++;
            if(s[i]=='3')three++;
        }
        if(sum%9 == 0){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=1;i<=two;i++){
                sum=sum+2;
                if(sum % 3 == 0){
                    
                    break;
                }
            }
            if(sum%9==0)cout<<"YES"<<endl;
            else {
                bool flag=false;
                for(int i=1;i<=three;i++){
                    sum=sum+6;
                    if(sum % 9 == 0){
                        flag=true;
                        break;
                    }
                }
                if(flag)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
 }