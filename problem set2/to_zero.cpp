#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n,k;cin>>n>>k;
        if(n%2==0){
            if(k%2==0){
                int x=(n%k==0)?n/k:n/k +1;
                cout<<x<<endl;
            }
            else{
                int y=k-1;
                int x=(n%y==0)?n/y : n/y +1;
                cout<<x<<endl;
            }
        }
        else{
            if(k%2==0){
            n=n-(k-1);
         int x=(n%k==0)?n/k + 1:n/k +2;
                cout<<x<<endl;
            }
            else{
                n=n-k;
               int y=k-1;
                int x=(n%y==0)?n/y +1 : n/y +2;
                cout<<x<<endl;
            }
        }
    }
}