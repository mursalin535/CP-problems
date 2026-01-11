#include<bits/stdc++.h>

using namespace std;

int main(){
 int t; cin >> t;
 while(t--){
    int a, x, y;
    cin >> a >> x >> y;
    bool flag = true;
    int start = (x > y) ? y : x;
    int end = (x > y) ? x : y;
    for(int i = start; i <= end; i++){
        if(i == a){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 }
 return 0;
}