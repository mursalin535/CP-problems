#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    vector<int>d(n);
    for(int i=0;i<n;i++)cin>>d[i];

    int a[n][2];

    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    bool flag=true;
    for(int i=n-1;i>=1;i--){
        if(d[i]==-1){
            d[i]=a[i][0]-a[i-1][0];
if(d[i]>1 || d[i]<0){
    flag=false;
    break;
}
        }
    }
    if(flag){
        for(int i=0;i<n;i++)cout<<d[i]<<" ";
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }

 }
    return 0;
}