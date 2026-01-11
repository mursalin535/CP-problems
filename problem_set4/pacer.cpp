#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
        long long n,m;cin>>n>>m;
        long long a,b;cin>>a>>b;
long long point;
bool odd_one;
if((a%2!=0 && b==1) || (a%2==0 && b==0)){point=m;odd_one=true;}
else {point=m-1;odd_one=false;}
        
        for(long long i=0;i<n-1;i++){
            long long x,y;cin>>x>>y;
            if(odd_one){
                if(x%2==0 && y==1)point--;
                else if(x%2!=0 && y==0)point--;
                odd_one=false;
                
            }
            else{
                if(x%2==0 && y==0)point--;
                else if(x%2!=0 && y==1)point--;
                odd_one=true;
            }
           
        }
        cout<<point<<endl;
    }
    return 0;
}