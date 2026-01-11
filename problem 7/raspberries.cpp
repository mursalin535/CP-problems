#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t; 
    cin >> t;

    while(t--) {
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for(long long &x : a) cin >> x;

        // ----------------------------
        // 1) Check if product % k == 0 WITHOUT multiplying
        // ----------------------------
        bool divisible = false;

        if(k == 2 || k == 3 || k == 5) {
            for(long long x : a)
                if(x % k == 0) divisible = true;
        }
        else { // k = 4
            int evens = 0;
            for(long long x : a) {
                if(x % 4 == 0) divisible = true;
                if(x % 2 == 0) evens++;
            }
            if(evens >= 2) divisible = true;
        }

        if(divisible) {
            cout << 0 << "\n";
            continue;
        }

        // ----------------------------
        // 2) Not divisible -> compute minimal moves
        // ----------------------------

        if(k == 2 || k == 3 || k == 5) {

            long long best = LLONG_MAX;

            for(long long x : a) {
                long long next = ((x / k) + 1) * k;
                best = min(best, next - x);
            }

            vector<long long> smaller;
            for(long long x: a)
                if(x < k) smaller.push_back(x);

            if(smaller.empty()) cout << best << "\n";
            else {
                long long elem = *max_element(smaller.begin(), smaller.end());
                cout << min(best, k - elem) << "\n";
            }
        }
        else { // k = 4
            long long dif = LLONG_MAX;

            for(long long x : a) {
                long long rem = x % k;
                long long need = (rem == 0 ? 0 : k - rem);
                dif = min(dif, need);
            }

            long long evens = 0;
            for(long long x : a)
                if(x % 2 == 0) evens++;

            cout << min(dif, max(0LL, 2 - evens)) << "\n";
        }
    }

    return 0;
}
