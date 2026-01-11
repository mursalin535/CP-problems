#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
         long long k,x;cin>>k>>x;
         long long a=x,b=pow(2,(k+1))-x;
         long long tar=pow(2,k);
         vector<int>track;
         long long ans=0;
         if(a==0 || b==0){
             cout<<-1<<endl;
             continue;
         }
         while(a!=tar && b!=tar){
            if(a<tar){
                b=b-a;
                a=a*2;
                track.push_back(1);
                ans++;
            }
            else{
                a=a-b;
                b=b*2;
                track.push_back(2);
                ans++;
            }
         }
            cout<<ans<<endl;
            for(long long i=ans-1;i>=0;i--){
                cout<<track[i]<<" ";
            }
            cout<<endl;
    }
    return 0;
}