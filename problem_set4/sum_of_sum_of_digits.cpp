#include <bits/stdc++.h>
using namespace std;

vector<long long> v(2000001);  // Changed to single vector with long long

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    v[0] = 0;
    for(int i=1; i<2000001; i++){
        v[i] = v[i-1] + sum_of_digits(i);
    }
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << v[n] << endl;
    }
    return 0;
}
