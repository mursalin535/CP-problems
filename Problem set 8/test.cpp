#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t; 
    cin >> t;
    while(t--){
        long long n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for(long long i = 0; i < n; i++) cin >> a[i];

        vector<int> LR, BeforeL, AfterR;

        long long totalLR = 0;
        for(long long i = l - 1; i <= r - 1; i++){
            totalLR += a[i];
            LR.push_back(a[i]);
        }

        // ---- Swap with BeforeL ----
        for(long long i = 0; i < l - 1; i++){
            BeforeL.push_back(a[i]);
        }

        sort(LR.begin(), LR.end(), greater<int>());
        sort(BeforeL.begin(), BeforeL.end());

        long long totalLR2 = totalLR;
        long long k = min(LR.size(), BeforeL.size());
        for(long long i = 0; i < k; i++){
            if(LR[i] > BeforeL[i]){
                totalLR2 -= LR[i];
                totalLR2 += BeforeL[i];
            } else break;
        }

        long long ans = totalLR2;

        // ---- Swap with AfterR ----
        LR.clear();
        for(long long i = l - 1; i <= r - 1; i++){
            LR.push_back(a[i]);
        }

        for(long long i = r; i < n; i++){
            AfterR.push_back(a[i]);
        }

        sort(LR.begin(), LR.end(), greater<int>());
        sort(AfterR.begin(), AfterR.end());

        long long totalLR3 = totalLR;
        k = min(LR.size(), AfterR.size());
        for(long long i = 0; i < k; i++){
            if(LR[i] > AfterR[i]){
                totalLR3 -= LR[i];
                totalLR3 += AfterR[i];
            } else break;
        }

        ans = min(ans, totalLR3);

        cout << ans << "\n";
    }
    return 0;
}
