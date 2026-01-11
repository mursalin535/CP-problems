#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
       int count_B=0,count_A=0;
       for(int i=0;i<n;i++){
        if(s[i]=='A')count_A++;
        else count_B++;
       }
       if(s[n-1]=='B'){
        if(count_B>1)cout<<"Bob"<<endl;
        else{
            if(s[0]=='A')cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }
       }
       else{
        if(s[0]=='A')cout<<"Alice"<<endl;
        else{
            if(s[n-2]=='A')cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }
       }
    }
    return 0;
}