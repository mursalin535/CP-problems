#include<bits/stdc++.h>
using namespace std;

int  main(){
    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long>b(n);
        for(long long i=0;i<n;i++)cin>>b[i];

        vector<long long>a(n);
        long long j=1;
        a[0]=j;

        for(long long i=1;i<n;i++){
            long long x=i+1;
            long long mx=((x+1)*x)/2;

            if(b[i]==x){
                a[i]=j;
            }
            else if(b[i]==mx){
                j++;
                a[i]=j;
            }
            else if(b[i]<mx){
                long long gap=b[i] - b[i-1];
                if(gap-1 == i){
                    j++;
                    a[i]=j;
                }
                else {
                    a[i]=a[i-gap];
                }
            }
        }
        for(long long i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}