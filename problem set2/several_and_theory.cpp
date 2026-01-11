#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;
        cin>>s;
        if(n==1)cout<<"NO"<<endl;
        else{
        bool needed=true,equal=true;
        int i=0,j=n-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;j--;
                continue;
            }
            else if(s[j]>s[i]){
                needed=false;
                break;
            }
            else{
                equal=false;
                break;
            }
        }
        if(!needed)cout<<"YES"<<endl;
        else{
           if(k>=1){
            if(!equal)cout<<"YES"<<endl;
            else{
                if(n%2==0)cout<<"NO"<<endl;
                else{
                    (s[n/2]!=s[0])?cout<<"YES"<<endl:cout<<"NO"<<endl;
                }
            }
            
           }
           else{
            cout<<"NO"<<endl;
           }
        }
    }
}
}