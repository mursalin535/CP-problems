#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;
        cin>>s;
        bool flag=false,need_swap=false,all_equal=true;
       for(int i=0;i<n/2;i++){
        if(s[n-1-i]>s[i]){
            flag=true;
            break;
        }
        else if(s[i]==s[n-1-i]){

            continue;
        }
        else{
            all_equal=false;
            need_swap=true;
              break;
        }
       }
       if(flag){
        cout<<"YES"<<endl;
       }
       else{
        if(k==0){
            cout<<"NO"<<endl;
        }
        else{
            if(need_swap){cout<<"YES"<<endl;}
            else{
                if(n%2==0){
                    cout<<"NO"<<endl;
                }
                else{
                    int x=n/2;
                    bool possible=false;
                    for(int i=n-1;i>x;i--){
                        if(s[x]>s[i]){
                            possible=true;
                            break;
                        }
                    }
                    if(possible)cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
            }
        }
       }
        
    }
}