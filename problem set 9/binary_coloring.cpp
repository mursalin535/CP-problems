#include<bits/stdc++.h>
using namespace std;

vector<long long > ToBin(long long  x){
    vector<long long >bin;
    while(x){
        bin.push_back(x%2);
        x/=2;
    }
    
    return bin;
}

int main(){
    long long  t;cin>>t;
    while(t--){
        long long  x;cin>>x;
        vector<long long >bin=ToBin(x);
        int prints=31;
    
cout<<prints<<endl;
        for(long long  i=0;i<bin.size();i++){
            if (i + 1 < bin.size() && bin[i] == 1 && bin[i + 1] == 1)
{
                int j=i+1;
                int count=0;
                while(j<bin.size() && bin[j]==1){
                    count++;
                    j++;
                }
                cout<<-1<<" ";prints--;
                   prints-=count;
                while(count--){
                    cout<<0<<" ";
                }
             
                cout<<1<<" ";
                i=j;
                prints--;

    
            }
            else{
                cout<<bin[i]<<" ";
                prints--;

            }
        }
        while(prints--){
            cout<<0<<" ";
        }
        cout<<endl;


    }
    return 0;

}