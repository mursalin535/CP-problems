#include<bits/stdc++.h>

using namespace std;

int main(){
 int t; cin >> t;
 while(t--){
    int x;cin>> x;
    int min=INT_MAX;
    while(x>0){
        int a=x%10;
        if(a<min) min=a;
        x/=10;
    }
    cout<<min<<endl;
 }
    return 0;
}