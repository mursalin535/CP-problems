#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];


         int onea=0,oneb=0;
            for(int i=0;i<n;i++){
                if(a[i]==1)onea++;
                if(b[i]==1)oneb++;
            }
            if((onea%2==0)&& (oneb%2==0)){
                cout<<"Tie"<<endl;
                continue;
            }
            if((onea%2!=0)&&(oneb%2!=0)){
                cout<<"Tie"<<endl;
                continue;
            }

        int mai=0,aij=0;

        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if((i+1)%2==0)mai++;
                else aij++;
            }
        }
        if(mai>aij)cout<<"Mai"<<endl;
        else if(aij>mai)cout<<"Ajisai"<<endl;
        else {
           
            if((onea%2!=0)&&(oneb%2==0))cout<<"Ajisai"<<endl;
            else if((oneb%2!=0)&&(onea%2==0))cout<<"Mai"<<endl;
            else cout<<"Tie"<<endl;
        }
    }
    return 0;
}