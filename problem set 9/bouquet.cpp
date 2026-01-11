#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
        long long n,m;cin>>n>>m;
        vector<int>a(n);
        for(long long i=0;i<n;i++)cin>>a[i];

        sort(a.begin(),a.end());

        vector<pair<int,int>>b;

        long long count=1;
        for(long long i=1;i<n;i++){
            if(a[i]==a[i-1]){
                count++;
            }else{
                b.push_back({a[i-1],count});
                count=1;
            }
        }

        b.push_back({a[n-1],count});

        long long cal=0,ans=0;

        for(long long i=0;i<b.size();i++){
if(i==0){
            cal=b[i].first*b[i].second;
            if(cal<=m){
                ans=max(ans,cal);
            }
            else{
                if(n==1){
                    ans=0;break;
                }
                ans=m;
               
            }
            continue;
}

            if(i>0 && b[i].first-b[i-1].first==1){

                cal=b[i].first*b[i].second + b[i-1].first*b[i-1].second;
                if(cal<=m){
                    ans=max(ans,cal);
                }
                else{
                    ans=m;
                    
                }
            }
            else{
                cal=b[i].first*b[i].second;
                if(cal<=m){
                    ans=max(ans,cal);
                }
                else{
                    ans=m;
                    
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}