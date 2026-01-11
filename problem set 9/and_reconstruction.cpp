#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  t; cin >> t;
    while(t--){
        long long  n;cin>>n;
        vector<long long > b(n-1);
        for(long long  i=0;i<n-1;i++) cin>>b[i];

        vector<long long > a(n);
        a[0] = b[0];a[n-1]=b[n-2];

        for(long long  i=1;i<n-1;i++){
            a[i]= b[i-1] | b[i];
        }

        bool valid = true;
        for(long long  i=0;i<n-1;i++){
            if ( (a[i] & a[i+1]) != b[i] )
{
                valid = false;
                break;
            }
        }
        if(valid){
            for(long long  i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;

    
}