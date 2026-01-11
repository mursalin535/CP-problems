#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>a(3,0);

        for(int i=0;i<n;i++){
            int temp;cin>>temp;
            a[temp]++;
        }
        int sum=a[1]+a[2]*2;
if(k==sum || k>=sum+2)cout<<-1<<endl;
else{
    for(int i=0;i<a[0];i++)cout<<0<<" ";
    for(int i=0;i<a[2];i++)cout<<2<<" ";
    for(int i=0;i<a[1];i++)cout<<1<<" ";
    cout<<endl;
}
        
    }
}