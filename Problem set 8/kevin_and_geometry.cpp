#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  n;cin>>n;
        vector<long long >a(n);
        for(long long  i=0;i<n;i++)cin>>a[i];

        sort(a.begin(),a.end());
        vector<long long >diff;

        for(long long  i=n-1;i>0;i--){
            diff.push_back(a[i]-a[i-1]);
        }

        bool flag=false;
        long long  index1,index2;

        for(long long  i=0;i<n-3;i++){
            if(a[i]==a[i+1]){
                long long  x=2*a[i];
                long long  j=0;
               ;
                while(turn--){
                  
                    if(diff[j]<x)
                    {
                        flag=true;
                        index1=i;
                        index2=j;
                        break;
                    }
                    else j++;
                }
            }
            if(flag) break;
        }

        if(!flag) {

        };
        else{
            cout<<a[index1]<<" "<<a[index1+1]<<" "<<a[n-2-index2]<<" "<<a[n-1-index2]<<endl;
        }
    }
    return 0;
}