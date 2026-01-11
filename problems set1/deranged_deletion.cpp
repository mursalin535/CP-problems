#include<bits/stdc++.h>

using namespace std;

bool isincreasing (vector<int>a){
    for(int i = 0; i < a.size() - 1; i++){
        if(a[i] > a[i + 1]) return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        if(isincreasing(a)){
            cout << "NO" << endl;
        } else {
            vector<int> b(n); // ✅ FIXED: allocated size
            for(int i = 0; i < n; i++) b[i] = a[i];

            sort(b.begin(), b.end());

            int remain = n;
            for(int i = 0; i < n; i++){
                if(a[i] == b[i]){
                    remain--;
                }
            }

            cout << remain << endl;
            for(int i = 0; i < n; i++){
                if(a[i] != b[i]) cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
