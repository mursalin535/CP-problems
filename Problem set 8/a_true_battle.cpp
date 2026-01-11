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
        string s;
        cin >> s;

        if (s[0] == '1' || s[n - 1] == '1') {
            cout << "YES\n";
        } else {
           bool ok=false;
           for(int i=1;i<n-2;i++){
            if(s[i]=='1' && s[i+1]=='1'){ok=true;break;}
           }

           if(ok)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }
    }
    return 0;
}
