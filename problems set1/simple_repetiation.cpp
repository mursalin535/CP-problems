#include<bits/stdc++.h>

using namespace std;

bool isprime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
 int t;
 cin>>t;
 while(t--){
    int x,k;
    cin>>x>>k;
    if(k>1 && x>1){
        cout<<"NO"<<endl;
    }
    else if(k==1){
        cout<<(isprime(x)?"YES":"NO")<<endl;
    }
    else if(k==1 && x==1){
        cout<<"NO"<<endl;
    }
    else if(k>1 && x==1){
        int y=k-1;
        while(y--){
            x=x*10+x;
        }
        cout<<(isprime(x)?"YES":"NO")<<endl;
    }
 }
    return 0;
}