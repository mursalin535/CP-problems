#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int one=0,zero=0;
        for(char c:s){
            if(c=='1') one++;
            else zero++;
        }
        if(one==0){
            cout<<0<<endl;
        }
        else{
            int ans=0;
            bool flag=false;
            for(int i=0;i<s.size()-1;i++){
                if(s[i]=='1' and s[i+1]=='0'){
                    ans=ans+2;
                    flag=true;

                }
            }
            if(flag){
            if(s[n-1]=='1') cout<<ans+1<<endl;
            else cout<<ans<<endl;
           
            }
            else cout<<1<<endl;
        }
    }
    return 0;
}