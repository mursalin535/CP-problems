#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int count=(n*n)-k;
       
        if(count==1)cout<<"NO"<<endl;
        else{
            int flag=count;
            cout<<"YES"<<endl;
            char ans[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(count!=0){
                        if(j==0)ans[i][j]='U';
                        else ans[i][j]='L';
                        count--;
                    }
                    else ans[i][j]='D';
                }
            }
             if(flag!=0)ans[0][0]='R';

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<ans[i][j];
                }
                cout<<endl;
            }

        }
    }
    return 0;
}