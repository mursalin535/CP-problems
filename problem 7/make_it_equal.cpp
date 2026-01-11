#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;

        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<int>b(n);
        for(int i=0;i<n;i++)cin>>b[i];

        unordered_multiset<int> s;
        for(int i=0;i<n;i++){
            s.insert(b[i] % k);
        }

        bool flag = true;

        for(int i=0;i<n;i++){
            int x = a[i] % k;

            if(s.count(x)){
                s.erase(s.find(x));
            }
            else{
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << '\n';
    }
    return 0;
}
 