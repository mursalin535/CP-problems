#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
       
      int strt=1;
      int end=n;
      int m=n;
      int j=1;

      while(m--){
        if(j%2!=0){
           cout<<end<<" ";
           end--;
           j++;
        }
        else{
              cout<<strt<<" ";
              strt++;
              j++;
        }
        
      }
        cout<<endl;

    }
    return 0;
}