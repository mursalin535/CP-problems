#include<bits/stdc++.h>
using namespace std;    

int main(){
    long long   t;cin>>t;
    while(t--){
        long long   n;cin>>n;
        vector<long long  >a(n);
        for(long long   i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long  >even;
        vector<long long  >odd;
        long long   total=0;
        for(long long   i=0;i<n;i++){
            if(a[i]%2==0)even.push_back(a[i]);
            else odd.push_back(a[i]);
            total+=a[i];
        }
        if(odd.size()==0)cout<<0<<endl;
        else if(odd.size()==1)cout<<total<<endl;
        else{
            long long   total_even=0;
            for(long long   i=0;i<even.size();i++)total_even+=even[i];
            sort(odd.begin(),odd.end());
            long long   sum_odd=0;
            long long   x=(odd.size()%2==0)?odd.size()/2:odd.size()/2+1;
            for(long long   i=0;i<x;i++)sum_odd+=odd[i];
            cout<<total_even+sum_odd<<endl;
        }
    }
    return 0;
}