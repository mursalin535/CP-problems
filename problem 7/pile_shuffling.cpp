#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); // Speed up I/O
    cin.tie(NULL); // Untie cin and cout
    
    long long t;
    if (!(cin >> t)) return 0; // Robust read
    
    while(t--){
        long long n;
        if (!(cin >> n)) break;
        
        // Use vectors of pairs/tuples for better readability/safety, but sticking to arrays for minimal change
        // We need original (a,b) and final (c,d)
        vector<array<long long, 4>> states(n); // Stores {a, b, c, d}

        for(long long i=0;i<n;i++){
            long long a, b, c, d;
            cin>>a>>b>>c>>d;
            states[i] = {a, b, c, d};
        }

        long long count=0;

        for(long long i=0;i<n;i++){
            long long a = states[i][0]; // prev[i][0]
            long long b = states[i][1]; // prev[i][1]
            long long c = states[i][2]; // fin[i][0]
            long long d = states[i][3]; // fin[i][1]

            if(a < c){ // Corresponds to the first loop's main condition
                // --- First loop logic ---
                count += c - a;
                
                if(b > d){
                    // Corresponds to the first loop's inner condition
                    count += (b - d) + a;
                    // Note: The original code does 'prev[i][1] = fin[i][1]', 
                    // but the second loop's logic is structured to *avoid* executing
                    // for this case due to the change. We don't need the change here.
                }
            } else { // Corresponds to prev[i][0] >= fin[i][0] 
                // --- Second loop logic for cases not covered by the first ---
                if(d < b){ // fin[i][1] < original_prev[i][1]
                    count += (b - d) + min(a, c); 
                }
            }
        }
        
        cout << count << endl;
    }
    return 0;
}