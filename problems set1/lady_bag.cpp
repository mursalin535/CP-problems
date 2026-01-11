#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    string a,b;cin>>a;cin>>b;

    int zero1=0,zero2=0;
    int x=1;
    for(int i=0;i<n;i++){
        if(x%2!=0){
            if(a[i]=='0')zero1++;
            x++;
        }
        else{
            if(b[i]=='0')zero1++;
            x++;
        }
    }
    x=1;
      for(int i=0;i<n;i++){
        if(x%2!=0){
            if(b[i]=='0')zero2++;
            x++;
        }
        else{
            if(a[i]=='0')zero2++;
            x++;
        }
    }
    cout << (zero1 >= (n + 1) / 2 && zero2 >= n / 2 ? "Yes" : "No") << '\n';
    
 }
    return 0;
}