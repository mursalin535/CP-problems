#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    int max,x,y;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]<0){
                max=abs(a[i][j]);
                x=i+1;
                y=j+1;
                while(x<n && y<n){
                    if(a[x][y]<0){
                       if(abs(a[x][y])>max){
                           max=abs(a[x][y]);
                            a[x][y]=0;
                             x++;
                       y++;
                      
                       }
                       else{
                       a[x][y]=0;
                       x++;
                       y++;}

                    }
                    else{
                        x++;
                        y++;
                    }
                   
                }
                ans+=max;
            }
        }
    }
    cout<<ans<<endl;
 }   // Your code here
    return 0;
}