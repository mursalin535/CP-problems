#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int zero=3,one=1,two=2,three=1,five=1;
    bool flag=false;
    int i=0;
    while(i<n){
        if(a[i]==0){
            zero--;
            i++;
        }
        else if(a[i]==1){
            one--;
            i++;
        }
        else if(a[i]==2){
            two--;
            i++;

        }
        else if(a[i]==3){
            three--;
            i++;
        }
        else if(a[i]==5){
            five--;
            i++;
        }
        else i++;
        if(zero<=0 && one<=0 && two<=0 && three<=0 && five<=0){
            flag=true;
            break;
        }
    }
    if(flag)cout<<i<<endl;
    else cout<<0<<endl;
 }
    return 0;
}