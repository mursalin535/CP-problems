#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);                   

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<int> f(26, 0); 

        for (char ch : s) {
            f[ch - 'A']++;
        }

        int j = 0; 
        int current_char_idx = 0; 
        string result(s.length(), ' '); 

        for (int k = 0; k < s.length(); ++k) {
            while (f[current_char_idx] == 0) {
                current_char_idx = (current_char_idx + 1) % 26;
            }

            result[j] = current_char_idx + 'A';
            f[current_char_idx]--;
            j++;

            current_char_idx = (current_char_idx + 1) % 26;
        }

        cout << result << endl;
    }
    return 0;
}