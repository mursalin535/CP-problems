#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
        long long k,x;cin>>k>>x;
        long long limit=pow(2,k);
        long long a=x,b=pow(2,k+1)-x;

        long long count=0;
        vector<int>seq;

        while(a!=limit &&  b!=limit){
            count++;
            if(a<limit){
                b-=a;
                a*=2;
                seq.push_back(1);

            }
            else{
                a-=b;
                b*=2;
                seq.push_back(2);
            }
        }
        cout<<count<<endl;
        if(count!=0){
        reverse(seq.begin(),seq.end());
        for(long long i=0;i<seq.size();i++){
            cout<<seq[i]<<" ";
        }
    }
        cout<<endl;
    }
    return 0;
}