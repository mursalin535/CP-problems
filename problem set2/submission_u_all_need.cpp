#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>s(n);
        for(int i=0;i<n;i++)cin>>s[i];

        int sum=0;
        for(int i=0;i<n;i++){
            if(s[i]==0){
                sum=sum+1;
            }
            else{
                sum=sum+s[i];
            }
        }
        cout<<sum<<endl;
    }
}