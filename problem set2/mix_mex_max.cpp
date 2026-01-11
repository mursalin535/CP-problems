#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;cin>>t;
   while(t--){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    bool flag=true;
    set<int>s;
    for(int i=0;i<n;i++){
        if(a[i]!=-1){
            s.insert(a[i]);
        }
    }
    if(s.size()==1 && *s.begin()!=0 || s.empty())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
    return 0;
}