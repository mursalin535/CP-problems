#include<bits/stdc++.h>
using namespace std;  


bool isPerfect(long long  n){
    long long  root=sqrt(n);
    return (root*root==n);
}

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  n;cin>>n;
        vector<long long >a;

        if(n==1){
            cout<<-1<<"\n";
            continue;
        }

       long long  prefix=0,total=0;

       for(long long  i=0;i<n;i++){
        a.push_back(i+1);
        total+=a[i];
       }

         if(isPerfect(total)){
          cout<<-1<<"\n";
          continue;
         }


       swap(a[0],a[1]);
        prefix=a[0];

        for(long long  i=1;i<n-1;i++){
            prefix+=a[i];
            if(isPerfect(prefix)){
                prefix-=a[i];
                prefix+=a[i+1];
                swap(a[i],a[i+1]);
                
            }
        }
        for(long long  i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";

    }
    return 0;
}