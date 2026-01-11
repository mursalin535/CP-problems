#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>x(n-1);

        for(int i=0;i<n-1;i++){
            cin>>x[i];
        }

        vector<int>a(n);

        int mx=*max_element(x.begin(),x.end());
        a[0]=mx+1;
           
        int j=0;
        for(int i=1;i<n;i++){
            a[i]=a[i-1]+x[j++];
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

        cout<<endl;
    }
    return 0;
}