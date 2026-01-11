#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        map<int,int> freq;
        for (int x : a) freq[x]++;

        int count4 = 0, count2 = 0;
        for (auto &p : freq) {
            if (p.second >= 4) count4++;
            else if (p.second >= 2) count2++;
        }

        bool flag = false;

        // Case 1: Any stick appears >=4 → square
        if (count4 >= 1) {
            flag = true;
            int j;
            for (auto &p : freq) {
                if (p.second >= 4) {
                    j = p.first;
                    break;
                }
            }
            cout << j << " " << j << " " << j << " " << j << endl;
        }
        // Case 2: At least two sticks appear >=2 → rectangle
        else if (count2 >= 2) {
            flag = true;
            vector<int> pairs;
            for (auto &p : freq) {
                if (p.second >= 2) pairs.push_back(p.first);
            }
            sort(pairs.begin(), pairs.end());

            int leg = pairs.back(); // largest stick as "legs"
            int a_pair = -1, b_pair = -1;
            for (int i = 0; i + 1 < pairs.size(); i++) {
                int x = pairs[i];
                int y = pairs[i + 1];
                if (abs(y - x) < 2 * leg) {
                    a_pair = x;
                    b_pair = y;
                    break;
                }
            }

            if (a_pair != -1) {
                cout << a_pair << " " << a_pair << " " << b_pair << " " << b_pair << endl;
            } else {
                // fallback: largest two pairs
                int x = pairs[pairs.size() - 2];
                int y = pairs[pairs.size() - 1];
                cout << x << " " << x << " " << y << " " << y << endl;
            }
        }
        // Case 3: Exactly one stick appears twice
        else if (count2 == 1) {
            int leg;
            for (auto &p : freq) {
                if (p.second >= 2) {
                    leg = p.first;
                    break;
                }
            }

            vector<int> others;
            for (int x : a) {
                if (x != leg) others.push_back(x);
            }
            sort(others.begin(), others.end());

            int base1 = -1, base2 = -1;
            for (int i = 0; i + 1 < others.size(); i++) {
                int x = others[i], y = others[i + 1];
                if (abs(y - x) < 2 * leg) {
                    base1 = x;
                    base2 = y;
                    break;
                }
            }

            if (base1 != -1) {
                flag = true;
                cout << leg << " " << leg << " " << base1 << " " << base2 << endl;
            }
        }

        if (!flag) cout << -1 << endl;
    }

    return 0;
}
