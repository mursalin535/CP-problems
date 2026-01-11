#include<bits/stdc++.h>

using namespace std;

int main(){
 int t; cin >> t;
 while(t--){
    int n;cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    int x=a[0]+a[1]-1,j=2;
    while(j<n){
        x=x+a[j]-1;
        j++;
    }
    if(n==1)cout<<a[0]<<endl;

   else cout << x << endl;
 }
    return 0;
}