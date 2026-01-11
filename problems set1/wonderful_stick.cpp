#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        vector<int> asc(n);
        vector<int> dsc(n);
        vector<int> f(n + 1, 0);
        
        for(int i = 1; i <= n; i++){
            asc[i - 1] = i;
            dsc[n - i] = i;
            f[i]++;
        }

        int asc_i = 0, dsc_i = 0;
        vector<int> result(n);

        for(int i = s.length() - 1; i >= 0; i--){  // i is index of string (0-based)
            if(s[i] == '<'){
                result[i + 1] = asc[asc_i];
                f[asc[asc_i]]--;
                asc_i++;
            }
            else{
                result[i + 1] = dsc[dsc_i];
                f[dsc[dsc_i]]--;
                dsc_i++;
            }
        }

        for(int i = 1; i <= n; i++){
            if(f[i] != 0){
                result[0] = i;
                break;
            }
        }

        for(int i = 0; i < n; i++){
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
