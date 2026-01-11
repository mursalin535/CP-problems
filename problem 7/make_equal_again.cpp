#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

       int ans=n;

       int seq_last=1;
       int pivot=a[n-1];
       for(int i=n-2;i>=0;i--){
        if(a[i]==pivot)seq_last++;
        else break;
       }

       int seq_first=1;
       pivot=a[0];
       for(int i=1;i<n;i++){
        if(a[i]==pivot)seq_first++;
        else break;
       }

       if(seq_first==n)cout<<0<<endl;
       else if(a[0]==a[n-1]){
        ans=ans-(seq_first+seq_last);
        cout<<ans<<endl;
       }
       else{
        ans=ans-max(seq_first,seq_last);
        cout<<ans<<endl;
       }

    }
    return 0;
}