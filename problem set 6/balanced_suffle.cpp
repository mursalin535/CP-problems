#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<tuple<char, int, int>> pb(s.length());

    int j = 1;
    get<0>(pb[0]) = s[0];
    get<1>(pb[0]) = 0;
    get<2>(pb[0]) = j++;

    for (int i = 1; i < s.length(); i++) {
        if (s[i - 1] == '(')
            get<1>(pb[i]) = get<1>(pb[i - 1]) + 1;
        else
            get<1>(pb[i]) = get<1>(pb[i - 1]) - 1;

        get<0>(pb[i]) = s[i];
        get<2>(pb[i]) = j++;
    }

    sort(pb.begin(), pb.end(), [](auto &a, auto &b) {
        if (get<1>(a) != get<1>(b))
            return get<1>(a) < get<1>(b);
        return get<2>(a) > get<2>(b); // tie-break: later pos first
    });

    for (auto &x : pb)
        cout << get<0>(x);
    cout << endl;

    return 0;
}
