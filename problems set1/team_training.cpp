#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int n,x;cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.rbegin(), a.rend()); // sort in descending order
int ans = 0;
for (int i = 0, cnt = 1; i < n; i++, cnt++) {
    if (a[i] * cnt >= x) {
        ans++;
        cnt = 0;
    }
}
    cout << ans << endl;
 }
    return 0;
}