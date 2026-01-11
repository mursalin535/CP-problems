#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;cin>>t;
 while(t--){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int has=0,count=0;
   for(int i=0;i<n;i++){
    if(a[i]>=k){
        has+=a[i];
    }
    else if(a[i]==0){
        if(has>0){
            has--;
            count++;
        }
    }
   }
    cout<<count<<endl;
 }   // Your code here
    return 0;
}