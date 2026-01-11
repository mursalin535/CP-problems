#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n, vector<int>(m));  // Fixed 2D vector declaration
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int maxelement=INT_MIN,maxcount=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]>maxelement){
                    maxelement=a[i][j];
                    maxcount=1;
                }
                else if(a[i][j]==maxelement){
                    maxcount++;
                }
            }
        }
        pair<int,int> index[maxcount];
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==maxelement){
                    index[k].first=i;
                    index[k].second=j;
                    k++;
                }
            }
        }
        bool flag=true;
        for(int i=0;i<maxcount-1;i++){  // Fixed loop condition to prevent out-of-bounds access
            if(index[i].first!=index[i+1].first || index[i].second!=index[i+1].second){  // Fixed != operator
                flag=false;
                break;
            }
        }
        if(flag)cout<<maxelement-1<<endl;  // Fixed typo in variable name
        else cout<<maxelement<<endl;
    }
    return 0;
}