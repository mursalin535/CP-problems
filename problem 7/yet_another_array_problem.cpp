#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(b==0) return a;
    return gcd(b, a%b);
}
 
int main(){

    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;

        vector<long long> arr(n);
        for(long long i=0;i<n;i++) cin>>arr[i];

        long long odd=0;
        for(long long i=0;i<n;i++){
            if(arr[i] % 2 != 0) odd++;
        }

        if(odd > 0){
            cout << 2 << endl;
        }
        else{
            sort(arr.begin(), arr.end());
            vector<long long> check(100);
            long long k = 2;
            for(long long i = 1; i <= 100; i++){
                check[i-1] = k++;
            }

            bool flag = false;
            long long ans = -1;

            for(long long i = 0; i < n; i++){
                for(long long j = 0; j < 100; j++){
                    if(gcd(arr[i], check[j]) == 1){
                        flag = true;
                        ans = check[j];
                        break;
                    }
                }
                if(flag) break;
            }

            cout << ans << endl;
        }
    }
    return 0;
}
