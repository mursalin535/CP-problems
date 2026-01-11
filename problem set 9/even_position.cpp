#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;

        string ans=s;

        ans[0]='(';

        for(int i=ans.length()-1;i>0;i--){  // This line causes warning
            if(ans[i]=='_'){
                (ans[i-1]=='(')?ans[i]=')':ans[i]='(';
            }
        }

        int closed=0,opened=0;

        for(size_t i=0; i<ans.length(); i++){  // ✅ Fixed: use size_t
            if(ans[i]=='(')opened+=(i+1);
            else closed+=(i+1);
        }
        cout<<(closed-opened)<<"\n";
    }
    return 0;
}