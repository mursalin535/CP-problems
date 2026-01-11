    #include<bits/stdc++.h>

    using namespace std;
    int main(){
        int t;cin>>t;
        while(t--){
            long long   n,k;cin>>n>>k;
            vector<pair<long long  ,long long  >>a(k);
            for(long long   i=0;i<k;i++){
                cin>>a[i].first>>a[i].second;
            }
            sort(a.begin(),a.end(),[](pair<long long  ,long long  >&p1,pair<long long  ,long long  >&p2){
                return p1.second>p2.second;
            });
            long long   earn=0;
        for(long long   i=0;i<(n<k?n:k);i++){
            earn=earn+(a[i].second);
        }
        cout<<earn<<endl;
    }
    return 0;
    }