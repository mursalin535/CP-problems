#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;cin>>t;
    while(t--){

        long long n;cin>>n;
        vector<long long>a(n);
        for(long long i=0;i<n;i++)cin>>a[i];

        long long total=0;
        for(long long i=0;i<n;i++)total+=a[i];

        if(n==1 || n==2){
            cout<<-1<<endl;
            continue;
        }

        long long count = 0;
        for(long long i=0;i<n;i++){
            if(a[i] * (2LL * n) < total) count++;
        }

        if(count > n/2){
            cout << 0 << endl;
        } else {

            sort(a.begin(), a.end());
            long long index = (n/2) + 1;  // element that must become unhappy

            long long need = a[index-1] * (2LL * n) - total + 1;
            if(need < 0) need = 0;

            cout << need << endl;
        }
    }
    return 0;
}
