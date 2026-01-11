#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int A=0,B=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='A')A++;
            else B++;
        }
        (A>B)?cout<<'A'<<endl:cout<<'B'<<endl;
    }
    return 0;
}