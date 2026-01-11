#include<bits/stdc++.h>

using namespace std;

int binaryones(int n){
    int count=0,rem;
    while(n>0){
        rem=n%2;
        if(rem==1) count++;
        n=n/2;
    }
    return count;
}

class Map{  // Changed from 'map' to 'Map' to avoid conflict with std::map
    public:
    int index;
    int ones;
};

bool compare(const Map &a, const Map &b) {  // Comparison function for sorting
    return a.ones < b.ones;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);   
        for(int i = 0; i < n; i++) cin >> a[i];
        
        Map *m = new Map[n];  // Changed from 'map' to 'Map'

        for(int i=0;i<n;i++){
            m[i].index = i;
            m[i].ones = binaryones(a[i]);
        }
        
        sort(m, m+n, compare);  // Using the comparison function
        
        int j=0;
        while(k--){
            a[m[j].index]++;
            j++;
            if(j==n){
                j=0;
            }
        }
        
        int totalones=0;
        for(int i=0;i<n;i++){
            totalones+=binaryones(a[i]);
        }
        cout << totalones << endl;
        
        delete[] m;  // Freeing allocated memory
    }
    return 0;
}