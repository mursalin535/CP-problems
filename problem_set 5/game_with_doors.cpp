#include<bits/stdc++.h>
using namespace std;    

int main(){
    int t;cin>>t;
    while(t--){
        int a1,a2,b1,b2;cin>>a1>>a2>>b1>>b2;
        if((a2<b1 && b2>a2) || (b2<a1 && a2>b2))cout<<1<<endl;
        else if((b1<=a2 && b2>a2 && b1>a1) || (a1<=b2 && a2>b2 && a1>b1))(b1<=a2 && b2>a2 && b1>a1)?cout<<(a2-b1)+2<<endl:cout<<(b2-a1)+2<<endl;
        else if((a2>b1 && a2>b2 && b1>a1 && b2>a1) || (b2>a1 && b2>a2 && a1>b1 && a2>b1))(a2>b1 && a2>b2 && b1>a1 && b2>a1)?cout<<(b2-b1)+2<<endl:cout<<(a2-a1)+2<<endl;
        else if((a2>b1 && a2==b2 && b1>a1 && b2>a1) || (b2>a1 && b2==a2 && a1>b1 && a2>b1))(a2>b1 && a2==b2 && b1>a1 && b2>a1)?cout<<(b2-b1)+1<<endl:cout<<(a2-a1)+1<<endl;
        else if((a2>b1 && a2>b2 && b1==a1 && b2>a1) || (b2>a1 && b2>a2 && a1==b1 && a2>b1))(a2>b1 && a2>b2 && b1==a1 && b2>a1)?cout<<(b2-b1)+1<<endl:cout<<(a2-a1)+1<<endl;
        else if(a1==b1 && a2==b2)cout<<a2-a1<<endl;
    }
    return 0;
}