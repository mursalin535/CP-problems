#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int n,s;cin>>n>>s;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int diffst=s-a[0],difflst=a[n-1]-s;
    int result=0;
    if(n==1){
        cout<<abs(s-a[0])<<endl;
    }
    else{
    if(diffst<difflst){
        result=abs(s-a[0])+abs(a[n-1]-a[0]);
    }
    else if(diffst>difflst){
        result=abs(a[n-1]-s)+abs(a[n-1]-a[0]);

    }
    else{
         result=(a[n-1]-s)+(a[n-1]-a[0]);
    }
    cout<<result<<endl;
}
    
 }
    return 0;
}