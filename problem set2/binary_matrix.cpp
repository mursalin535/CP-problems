#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char c;
                cin>>c;
                a[i][j]=c-'0';
            }
        }
        int r=0,c=0;
        int sum;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    sum=a[i][j];
                }
                else{
                    sum=sum^a[i][j];
                }

            }
            if(sum)r++;
            
        }
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(i==0){
                    sum=a[i][j];
                }
                else{
                    sum=sum^a[i][j];
                }

            }
            if(sum)c++;
            
        }
        cout<<max(r,c)<<endl;
    }
}
