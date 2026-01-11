#include <iostream>
using namespace std;
int main(){
    long long t;cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if((a*b)%2!=0)cout<<(a*b)+1<<endl;
        else{
            if(b%2!=0) cout<<-1<<endl;
            else{
            long long x=b/2;
            if(((a*x)+2)%2==0)cout<<(a*x)+2<<endl;
            else cout<<-1<<endl;
        }}
    }
    return 0;
}