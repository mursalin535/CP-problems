#include<bits/stdc++.h>
using namespace std;

long long get_smallest_divisor(long long n) {
    if (n <= 1) return n; 
    
    if (n % 2 == 0) return 2;
    
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    if (!(cin >> t)) return 0;

    while(t--){
        long long a, b;
        if (!(cin >> a >> b)) continue;

        if(a == 1){
            cout << b * b << "\n";
        } else {
            long long mn_a = get_smallest_divisor(a);
            long long mn_b = get_smallest_divisor(b);

            long long mn = min(mn_a, mn_b);
            
            cout << mn * b << "\n";
        }
    }
    return 0;
}