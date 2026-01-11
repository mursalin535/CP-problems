#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n+1,0);
        vector<int>b(n,0);

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(!a[x]){
                a[x]=1;
                b[i]=x;
            }
        }
        vector<int>non_used;
        for(int i=1;i<=n;i++){
            if(a[i]==0){
                non_used.push_back(i);
            }


        }

        int j=0;
        for(int i=0;i<n;i++){
            if(b[i]==0){
                b[i]=non_used[j];
                j++;
            }
        }

       

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
