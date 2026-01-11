#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<pair<int,int>> odds, evens;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) evens.push_back({a[i], i});
            else odds.push_back({a[i], i});
        }

        // odds → descending by first
        sort(odds.begin(), odds.end(), [](auto &p1, auto &p2) {
            return p1.first < p2.first;
        });

        // evens → ascending by first
        sort(evens.begin(), evens.end(), [](auto &p1, auto &p2) {
            return p1.first > p2.first;
        });
int oddtotal=0,eventotal=0,total=0;
int cost;
        
        if(evens[0].first>odds[0].first && (evens[0].first-odds[0].first)>abs(evens[0].second-odds[0].second)){
cost =abs(evens[0].second-odds[0].second);
pair<int,int>temp;
temp=evens[0];
evens[0]=odds[0];
odds[0]=temp;
        }
        for(int i=0;i<odds.size();i++){
            oddtotal=oddtotal+odds[i].first;
        }
        for(int i=0;i<evens.size();i++){
            eventotal=eventotal+evens[i].first;
        }
        total=oddtotal-eventotal+cost;
        cout<<total<<endl;
  
    }
    return 0;
}
