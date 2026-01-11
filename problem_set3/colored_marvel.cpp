#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int mx=*max_element(a.begin(),a.end());
        vector<int>freq(mx+1,0);
        for(int i=0;i<n;i++)freq[a[i]]++;
        int count_distinct=0;
        for(int i=0;i<freq.size();i++)if(freq[i]==1)count_distinct++;
        int ans=0;
        for(int i=0;i<=mx;i++){
            if(freq[i]>1)ans++;

        }
        (count_distinct%2==0)?ans+=(count_distinct/2)*2:ans+=((count_distinct/2)+1)*2;
        cout<<ans<<"\n";
    }
}