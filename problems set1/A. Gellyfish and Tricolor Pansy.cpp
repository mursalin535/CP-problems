#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
if(min(b,d)<=min(a,c)){
    cout<<"Gellyfish"<<endl;
}
else{
    cout<<"Flower"<<endl;
}
 }
    return 0;
}