#include <bits/stdc++.h>

using namespace std;

int fibo(int a[], int n) {
    a[2] = n;
    int count = 0;
    int prevone = 0, prevtwo = 1;
    for (int i = 2; i < 5; i++) {
        if (a[i] == a[prevone] + a[prevtwo]) {
            count++;
        }
        prevone = prevtwo;
        prevtwo = i;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a[5];
        for (int i = 0; i < 5; i++) {
            if (i == 2) continue;
            cin >> a[i];
        }
        int count = INT_MIN;
        for (int i = 1; i <= 100; i++) {
            int x = fibo(a, i);
            if (x > count) {
                count = x;
            }
        }

        cout << count << endl;
    }
    return 0;
}
