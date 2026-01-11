#include<bits/stdc++.h>
using namespace std;    

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

      int k=1;
      while(1){
        if(k%2!=0 && c>0){
            b--;
            d--;
        }
        else if(k%2==0 && d>0){
            a--;
            c--;
        }
        k++;
if(a<=0 || b<=0){
    break;
}
      }
      if(a<=0){
        cout<<"Flower"<<endl;
      }
      else{
        cout<<"Gellyfish"<<endl;
      }
    }
    return 0;
}