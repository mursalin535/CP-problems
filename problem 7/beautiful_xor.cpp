#include<bits/stdc++.h>
using namespace std;

vector<char> toBinary(int num){
    vector<char>res;
    if(num==0){
        res.push_back('0');
        return res;
    }
    while(num){
        if(num&1)res.push_back('1');
        else res.push_back('0');
        num>>=1;
    }
    reverse(res.begin(),res.end());
    return res;
}

int toDecimal(vector<char>&bin){
    int res=0;
    int n=bin.size();
    for(int i=0;i<n;i++){
        if(bin[n-1-i]=='1'){
            res+= (1<<i);
        }
    }
    return res;
}

int main(){
    int t; std::cin >> t;
    while(t--){
        int a,b; std::cin >> a >> b;

        if(a==b){
            cout<<0<<endl;
            continue;
        }

        vector<char>binA = toBinary(a);
        vector<char>binB = toBinary(b);


        if(binA.size() < binB.size()){
            std::cout << -1 << std::endl;
            continue;
            
        }

        else if(binA.size()>binB.size()){
            
            vector<char>updb;
            int gap=binA.size()-binB.size();
            for(int i=0;i<gap;i++)updb.push_back('0');
            for(int i=0;i<binB.size();i++)updb.push_back(binB[i]);

            vector<char>x;

            for(int i=1;i<binA.size();i++){
                if(binA[i]==updb[i])x.push_back('0');
                else x.push_back('1');
            }

            if(binA[0]==updb[0]){
                cout<<1<<endl;
                cout<<toDecimal(x)<<endl;

            }
            else{
                cout<<2<<endl;
                cout<<toDecimal(x)<<" ";
                vector<char>y;
                y.push_back('1');
                
                for(int i=0;i<binA.size()-1;i++){
                    y.push_back('0');
                }
                cout<<toDecimal(y)<<endl;
            }

        }
        else{

  
         

            vector<char>x;

            for(int i=1;i<binA.size();i++){
                if(binA[i]==binB[i])x.push_back('0');
                else x.push_back('1');
            }

            if(binA[0]==binB[0]){
                cout<<1<<endl;
                cout<<toDecimal(x)<<endl;

            }
            else{
                cout<<2<<endl;
                cout<<toDecimal(x)<<" ";
                vector<char>y;
                y.push_back('1');
                for(int i=0;i<binA.size()-1;i++){
                    y.push_back('0');
                }
                cout<<toDecimal(y)<<endl;
            }

        }


    }
    return 0;
}           
        