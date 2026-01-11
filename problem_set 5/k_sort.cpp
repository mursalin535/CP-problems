#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) cin >> a[i];
        vector<long long> culprit;
        long long param = a[0];
        for (long long i = 1; i < n; i++) {
            if (a[i] < param) culprit.push_back(param - a[i]);
            else param = a[i];
        }
        if (culprit.size() == 0) {
            cout << 0 << endl;
            continue;
        }
        sort(culprit.begin(), culprit.end());
        long long cost = culprit.size() + 1;
        long long total = cost * culprit[0];
        for (long long i = 1; i < culprit.size(); i++) {
            cost--;
            total += cost * (culprit[i] - culprit[i - 1]);
        }
        cout << total << endl;
    }
    return 0;
}