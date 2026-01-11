#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;

while(t--){
    int x;cin>>x;
int ans;
    bool flag=false;
    for(int i=1;i<x;i++){
        int c=5^i;
        if(i+c>5 && c+5>i && i+5>c){
            flag=true;
            ans=i;
            break;
        }
    }
    if(flag){
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
    return 0;
}