#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    int j=1,total=0;
    for(int i=n;i>=1;i--){
        total=total+abs(i-j);
        j++;
    }
    cout<<(total/2)+1<<endl;
 }
    return 0;
}