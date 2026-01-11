#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int n,x;cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
int j=0;
    while(1){
        if(a[j]==0){
            j++;
        }
        else{
            j=j+x;
            break;
        }

      
    }
     if(j>=n){
        cout<<"YES"<<endl;
        }
        else{
            bool flag=true;
            for(int i=j;i<n;i++){
                if(a[i]==1){
                    flag=false;
                    break;
                }

            }
            if(flag){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
        }
    }
 }
    return 0;
}