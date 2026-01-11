#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int zero=0,minus=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x==0)zero++;
            else if(x==-1)minus++;
        }
        (minus%2==0)?cout<<zero<<endl:cout<<zero+2<<endl;
    }
    return 0;
}