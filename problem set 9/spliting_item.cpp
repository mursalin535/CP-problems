#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  n,k;cin>>n>>k;
        vector<long long > a(n);
        for(long long  i=0;i<n;i++) cin>>a[i];

        long long  total=0;
        for(long long  i=0;i<n;i++) total+=a[i];

        sort(a.begin(),a.end());
        long long  alice=0,bob=0;
        long long  turnA=(n%2==0)?n/2:n/2+1;
        long long  turnB=n/2;

        long long  j=n-1;
        while(turnA--){
            alice+=a[j];
            j-=2;
        }

        j=n-2;

      while(j>=0 && k>0){
        if(a[j]==a[j+1]){
            j-=2;
            continue;


        }
        else{
            long long  def=a[j+1]-a[j];
            if(def>k) {def=k;k=0;}
            a[j]+=def;
            k-=def;
        }


      }
j=n-2;
        while(turnB--){
            bob+=a[j];
            j-=2;
        }
        cout<<alice - bob<<endl;
        
    }
    return 0;
}