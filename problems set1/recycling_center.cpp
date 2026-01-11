#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, c;
        cin >> n >> c;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> deadlines;
        for (int i = 0; i < n; i++) {
            if (a[i] > c) {
                deadlines.push_back(0);
            } else {
                long long T_i = 1;
                long long x = a[i] * 2;
                while (x <= c) {
                    T_i++;
                    x *= 2;
                }
                deadlines.push_back(T_i);
            }
        }
        sort(deadlines.begin(), deadlines.end());
        long long count_on_time = 0;
        long long next_second = 1;
        for (int i = 0; i < n; i++) {
            if (next_second <= deadlines[i]) {
                count_on_time++;
                next_second++;
            }
        }
        cout << n - count_on_time << '\n';
    }
    return 0;
}