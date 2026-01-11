#include <bits/stdc++.h>
using namespace std;

int   main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long   t; 
    cin >> t;

    // Precompute powers of 3 up to 1e9
    vector<long long> pw;
    pw.push_back(1);
    while (pw.back() <= 1e9) {
        pw.push_back(pw.back() * 3);
    }

    while (t--) {
        long long   n,k;cin>>n>>k;
        long long   y=(n-k)/2;
        long long   x=k-y;
        cout<<(x*3 + y*10)<<endl;
    }
    return 0;
}
