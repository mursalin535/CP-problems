#include <bits/stdc++.h>

using namespace std;

int main() {
    // Your code here
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int counta=a[n-1],countb=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>b[i+1]){
                counta=counta+a[i];
                countb=countb+b[i+1];
            }
        }
        cout<<counta-countb<<endl;
    }
    return 0;
}