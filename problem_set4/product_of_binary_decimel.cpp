#include<bits/stdc++.h>
using namespace std;
vector<int> b;

void binarydecimals() {
    for (int i = 2; i <= 100000; i++) {
        int n = i;
        bool ok = true;
        while (n > 0) {
            int d = n % 10;
            if (d != 0 && d != 1) { // digit not allowed
                ok = false;
                break;
            }
            n /= 10;
        }
        if (ok) b.push_back(i);
    }
}

bool check(int n){
    if(n==1) return true;
    for(int i=0; i<b.size(); i++){
        if(n % b[i] == 0 && check(n / b[i])) return true;
    }
    return false;
}

int main(){
    binarydecimals(); // compute once, outside test loop
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(check(n)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
