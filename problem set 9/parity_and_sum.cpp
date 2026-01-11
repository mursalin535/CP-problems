#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  n;cin>>n;
        vector<long long > arr(n);
        for(long long  i=0;i<n;i++) cin>>arr[i];

        vector<long long >even;
        vector<long long >odd;

        for(long long  i=0;i<n;i++){
            if(arr[i]%2!=0){
                odd.push_back(arr[i]);
            }
        }

        for(long long  i=0;i<n;i++){
            if(arr[i]%2==0){
                even.push_back(arr[i]);
            }
        }

        if(odd.size()==0 || even.size()==0){
            cout<<0<<endl;
            continue;
        }

        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        long long  mx=odd[odd.size()-1]+even[0];

        
        long long  ope=(odd[odd.size()-1]>even[0])?1:2;

        for(long long  i=1;i<even.size();i++){
            if(even[i]<mx){
                ope++;
                mx+=even[i];
            }
            else{
                ope+=2;
                mx+=(even[i]*2);
            }
        }
        cout<<ope<<endl;

        
    }
    return 0;
}