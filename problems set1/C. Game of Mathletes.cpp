#include<bits/stdc++.h>

using namespace std;

int main(){
 int t; cin >> t;
 while(t--){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int max= *max_element(a.begin(), a.end());
    vector<int> freq(max + 1, 0);
    for(int i = 0; i < n; i++){
        freq[a[i]]++;
    }
    int score=0;
    for(int i=0;i<n;i++){
        if(freq[a[i]]>0){
        int x=k-a[i];
        if(freq[x]>0 && x<=max+1 && freq[a[i]]>0){
            score++;
            freq[x]--;
           
        }
        
         freq[a[i]]--;
        }
    }
    cout<<score<<endl;
 }
    return 0;
}