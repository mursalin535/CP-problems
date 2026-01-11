#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  n;cin>>n;
        vector<long long >a(n+1);
        vector<long long >b(n+1);

        for(long long  i=0;i<n;i++){
            cin>>a[i];
        }

        for(long long  i=0;i<n+1;i++){
            cin>>b[i];
        }

        long long  Abs=abs(b[n]-b[0]);
        long long  mindif=Abs;
        long long  valb=b[0];

        for(long long  i=1;i<n;i++){
            Abs=abs(b[n]-b[i]);
            if(Abs<mindif){
                mindif=Abs;
                valb=b[i];
            }
        }

          Abs=abs(b[n]-a[0]);
          mindif=Abs;
        long long  vala=a[0];

        for(long long  i=1;i<n;i++){
            Abs=abs(b[n]-a[i]);
            if(Abs<mindif){
                mindif=Abs;
                vala=a[i];
            }
        }

        bool ok=false;
        for(long long  i=0;i<n;i++){
            if(a[i]<=b[i]){
                if(b[n]<=b[i] && b[n]>=a[i]){
                    ok=true;
                    break;
                }
            }
            else{
                if(b[n]>=b[i] && b[n]<=a[i]){
                    ok=true;
                    break;
                }
            }
        }
        long long  ans;

        if(ok){
            ans=1;
        }
        else{
            ans=(abs(vala-b[n])<abs(valb-b[n]))?abs(vala-b[n]):abs(valb-b[n]);
            ans++;
        }

        for(long long  i=0;i<n;i++){
            ans+=abs(a[i]-b[i]);
        }
        cout<<ans<<endl;

       
    }
    return 0;
}