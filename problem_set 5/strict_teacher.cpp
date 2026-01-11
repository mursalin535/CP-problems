#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  n,m,q;cin>>n>>m>>q;
        long long  m1,m2,d;
        cin>>m1>>m2>>d;
        if(d>m1 && d>m2){
            cout<<(n-d)+(d-m2)<<endl;
        }
        else if(d<m1 && d<m2){
            cout<<(d-1)+(m1-d)<<endl;
        }
        else{
            cout<<(((m2-d)-1)/2)+(((d-m1)-1)/2)+1<<endl; 
        }
    }
    return 0;
}