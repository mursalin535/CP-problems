#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  n,k;
        cin>>n>>k;
        vector<long long >a(n);long long  total=0;
        for(long long  i=0;i<n;i++){cin>>a[i];total+=a[i];}
        long long  mx=*max_element(a.begin(),a.end());
        long long  mn=*min_element(a.begin(),a.end());
        long long count_mx=0;
        for(int i=0;i<n;i++){
            if(a[i]==mx)count_mx++;
        }
        if(((mx-1)-mn)>k)cout<<"Jerry"<<endl;
        else if((mx-mn)-1==k && count_mx>1)cout<<"Jerry"<<endl;
        else{
          (total%2==0)?cout<<"Jerry"<<endl:cout<<"Tom"<<endl;
        }
    }
    return 0;
}