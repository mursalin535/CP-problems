#include<bits/stdc++.h>
using namespace std;
int  main(){
    long long  t;cin>>t;
    while(t--){
        long long  x;cin>>x;
        (x%2==0)?cout<<x/2<<endl:cout<<x*2<<endl;
    }
    return 0;
}