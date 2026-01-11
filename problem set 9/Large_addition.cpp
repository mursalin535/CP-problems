#include<bits/stdc++.h>
using namespace std;

int main(){
    long long   t;cin>>t;
    while(t--){
        long long   x;cin>>x;
        vector<long long  >digits;
        while(x){
            digits.push_back(x%10);
            x/=10;
        }
        reverse(digits.begin(),digits.end());

        if(digits[0]!=1 || (digits[digits.size()-1]>8))cout<<"NO"<<endl;
        else{
            bool possible=true;
            for(long long   i=1;i<digits.size()-1;i++){
                if(digits[i]==0){
                    possible=false;
                    break;
                }
            }
            if(possible)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}