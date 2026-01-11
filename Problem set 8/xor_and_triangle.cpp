#include<bits/stdc++.h>
using namespace std;

vector<long long > toBin(long long  x){
    vector<long long >res;
    while(x){
        res.push_back(x%2);
        x/=2;
    }
    reverse(res.begin(),res.end());
    return res;
}

long long  toDec(vector<long long >&bin){
    long long  res=0;
    long long  power=1;
    for(long long  i=bin.size()-1;i>=0;i--){
        res+=bin[i]*power;
        power*=2;
    }
    return res;
}

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  x;cin>>x;
        vector<long long >bin_of_x=toBin(x);

        long long  count_zero=0;
        for(long long  i=0;i<bin_of_x.size();i++){
            if(bin_of_x[i]==0) count_zero++;
        }

        if(count_zero==0)cout<<-1<<endl;
        else{
            vector<long long >bin_of_y;

            for(long long  i=0;i<bin_of_x.size();i++){
                if(bin_of_x[i]==0)bin_of_y.push_back(1);
                else bin_of_y.push_back(0);
            }

            for(long long  i=bin_of_y.size()-1;i>=0;i--){
                if(bin_of_y[i]==0){
                    bin_of_y[i]=1;
                    break;
                }
            }
            long long  y=toDec(bin_of_y);
            if(y>=x)cout<<-1<<endl;
            else cout<<y<<endl;
        }
    }
    return 0;
}