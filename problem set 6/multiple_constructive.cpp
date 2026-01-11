#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(2 * n);
        vector<bool>blank(2*n,true);
        int i=n,j=1;int k=0;int x;

       while(i!=0) {
            if(blank[j-1]==true){
            b[j-1] = i;
            if(i==n){
                x=i+j-1;
            }
            else{
             x=j+(i*2)-1;}
          
            b[x] = i;

            blank[j-1]=false;
            blank[x]=false;
            i--;
        }
        else{
            j++;
        }
    }

        for (int i = 0; i < 2 * n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
