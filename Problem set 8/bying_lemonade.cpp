#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
        long long n,k;cin>>n>>k;
        vector<long long>a(n);
        for(long long i=0;i<n;i++)cin>>a[i];

        if(k==1){
            cout<<1<<endl;
            continue;
        }

        sort(a.begin(),a.end());
        long long last=n,skip=0;
        long long button=0,total=0;

        long long val=a[0];
        button+=last;
        total+=n-skip;
        long long m=val-(skip+1);
        last=n-skip;
        button+=last*m;
        total+=(n-skip)*m;
        skip++;

        
        

       if(total==k){
            cout<<button<<endl;
            continue;
        }
        else if(total>k){
            // If we have already exceeded k in the first step
            long long excess = total - k;
            cout << button - excess << endl;
            continue;
        }

        for(long long i=1;i<n;i++){
            if(a[i]==a[i-1]){  // FIX 1: Compare with previous element
                skip++;
                continue;
            }
            else{
                button+=last;
                total+=n-skip;
                m=a[i]-(skip+1);
                last=n-skip;
                button+=last*m;
                total+=(n-skip)*m;
                skip++;

                if(total>=k){  // FIX 2: Use >= instead of ==
                    // FIX 3: Simply subtract excess
                    long long excess = total - k;
                    button -= excess;
                    break;
                }
            }
        }
        
        if(total>=k)cout<<button<<endl;
        else cout<<button+(k-total)<<endl;
    }
    return 0;
}