#include<bits/stdc++.h>
using namespace std;

long long count_digits(long long n) {
    long long count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    return count;
}
int  main(){
    long long   t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long digits=count_digits(n);
        
        set<long long>s;
        long long   x=10;
        long long   j=0;
        while(j<digits-1){
            long long div=x+1;
            if(n%div==0){

                s.insert(n/div);
            }
            x*=10;
            j++;
        }
        cout<<s.size()<<endl;
        if(!s.empty()){
        for(auto i:s)cout<<i<<" ";
        cout<<endl;
    }
}
    return 0;
}