#include<bits/stdc++.h>
using namespace std;

int count_one(string s){
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1') count++;
    }
    return count;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s;
        cin >> s;
        int total = 0, count;

        for(int i = 0; i < n; i++){
            // Fix: flip s[i] safely using indexing
            char original = s[i];
            s[i] = (s[i] == '0') ? '1' : '0';
            
            count = count_one(s);
            total += count;

            s[i] = original; // revert to original value
        }

        cout << total << endl;
    }
    return 0;
}
