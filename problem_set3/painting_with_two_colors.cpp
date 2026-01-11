#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  n,a,b;cin>>n>>a>>b;
        bool flag=false;
        if(n%2==0){
            if(b>a){
                (b%2==0)?flag=true:flag=false;
            }
            else if(b<a){
                (a%2==0 && b%2==0)?flag=true:flag=false;
            }
            else{
                (a%2==0 && b%2==0)?flag=true:flag=false;
            }
        }
        else{
            if(b>a){
                (b%2!=0)?flag=true:flag=false;
            }
            else if(b<a){
                (a%2!=0 && b%2!=0)?flag=true:flag=false;
            }
            else{
                (a%2!=0 && b%2!=0)?flag=true:flag=false;
            }

        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}