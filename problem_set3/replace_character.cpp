#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for(char c : s) freq[c - 'a']++;

        // Find most frequent character
        char most_freq = 'a';
        int most_count = 0;
        for(int i = 0; i < 26; i++) {
            if(freq[i] > most_count) {
                most_count = freq[i];
                most_freq = 'a' + i;
            }
        }

        // Find least frequent character present
        char min_freq = 'a';
        int min_count = INT_MAX;
        for(int i = 0; i < 26; i++) {
            if(freq[i] != 0 && freq[i] < min_count && 'a' + i != most_freq) {
                min_count = freq[i];
                min_freq = 'a' + i;
            }
        }

        // Replace first occurrence of min_freq with most_freq
        for(int i = 0; i < n; i++) {
            if(s[i] == min_freq) {
                s[i] = most_freq;
                break;
            }
        }

        cout << s << "\n";
    }
}
