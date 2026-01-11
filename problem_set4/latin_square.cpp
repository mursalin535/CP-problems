#include<bits/stdc++.h> 
using namespace std;


int main(){
    int t;cin>>t;
    while(t--){
        vector<int>check(3,0);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                char x;cin>>x;
                if(x=='A')check[0]++;
                else if(x=='B')check[1]++;
                else if(x=='C') check[2]++;
            }
        }
        for(int i=0;i<3;i++){
            if(check[i]!=3){
                if(i==0)cout<<"A"<<endl;
                else if(i==1)cout<<"B"<<endl;
                else cout<<"C"<<endl;
                break;
            }
        }
    }
    return 0;
}