#include<bits/stdc++.h>
using namespace std;

int  main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        long long  n,k,x;cin>>n>>k>>x;
        vector<long long > a(n);
        for(long long  i=0;i<n;i++) cin>>a[i];

        long long  totalA=0;
        for(long long  i=0;i<n;i++) totalA+=a[i];

        if(totalA*k<x){
            cout<<0<<"\n";
            continue;
        }
        if(totalA*k==x){
            cout<<1<<"\n";
            continue;
        }

        long long  remain=(totalA*k)-x;
        long long  array_in_remain=remain/totalA;
        long long  count=array_in_remain*n;

        long long  final_remain=remain%totalA;

        if(final_remain==0){
            cout<<count+1<<"\n";
            continue;
        }
        long long  prefix_sum=0;
        for(long long  i=0;i<n;i++){
            prefix_sum+=a[i];
            if(prefix_sum<=final_remain){
                count++;
        }
            else{
                break;
            }
        }
        cout<<count+1<<"\n";
    }
    return 0;
}