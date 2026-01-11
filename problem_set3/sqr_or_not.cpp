#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int x=sqrt(n);
        if(x*x!=n)cout<<"No"<<endl;
        else{
            int one=0,zero=0;
            for(int i=0;i<n;i++){
                if(s[i]=='1')one++;
                else zero++;
            }
            if(zero==(x-2)*(x-2))cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}