#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  n;cin>>n;
        vector<long long >given(n);
        for(long long  i=0;i<n;i++)cin>>given[i];

        vector<long long >actual(n);
        for(long long  i=0;i<n;i++){
          long long  y=i+1;
          long long  x=((1+y)*y)/2;
          actual[i]=x;
        }
        cout<<1<<" ";
        long long  num=2,lag=0;
        for(long long  i=1;i<n;i++){
            if(actual[i]==given[i]){
                cout<<num++<<" ";
            }
            else{
                if(actual[i]-given[i]>lag){
                    cout<<1<<" ";
                    lag=actual[i]-given[i];
                }
                else{
                    cout<<num++<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}