#include<bits/stdc++.h>

    using namespace std;

 int main(){
        long long t;cin>>t;
        while(t--){
            long long n;cin>>n;
            vector<int>a(n);
            for(long long i=0;i<n;i++)cin>>a[i];
            long long oddsum=0,oddcount=0,evensum=0,evencount=0;  
            for(long long i=0;i<n;i++){
                if((i+1)%2==0){
                    evensum+=a[i];
                    evencount++;
                } else {
                    oddsum+=a[i];
                    oddcount++;
                }
            }
        ((oddsum/oddcount)==(evensum/evencount)&& (oddsum%oddcount==0)&& (evensum%evencount==0))?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }
        return 0;
    }