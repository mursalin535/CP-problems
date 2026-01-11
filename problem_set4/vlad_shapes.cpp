#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        char a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
 
        int row1=0,row2=0;
        int x = -1;  // Initialize to invalid value
        
        // Find first row of 1s
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]=='1'){
                    int k=j;
                    while(k<n && a[i][k]=='1'){
                        k++;
                    }
                    row1 = k-j;  // Calculate length
                    x = i;       // Store row index
                    break;
                }
            }
            if(x != -1) break;  // Exit outer loop if row found
        }
        
        // Find second row of 1s
        for(int i=x+1;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]=='1'){
                    int k=j;
                    while(k<n && a[i][k]=='1'){
                        k++;
                    }
                    row2 = k-j;  // Calculate length
                    break;
                }
            }
            if(row2 > 0) break;  // Exit if second row found
        }
        
        if(row1==row2) cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;
    }
    return 0;
}