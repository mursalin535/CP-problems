#include<bits/stdc++.h>
using namespace std;    

void printhash(){
    cout<<"##";
}
void printdot(){
    cout<<"..";
}

void hashfirst(int n){
    string s="hash";
    for(int i=0;i<n;i++){
        if(s=="hash"){
            printhash();
            s="dot";
        }
        else{
            printdot();
            s="hash";
        }
    }
    cout<<endl;
}
void dotfirst(int n){
    string s="dot";
    for(int i=0;i<n;i++){
        if(s=="hash"){
            printhash();
            s="dot";
        }
        else{
            printdot();
            s="hash";
        }
    }
    cout<<endl;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s="hash";
        for(int i=0;i<n;i++){
            if(s=="hash"){
                hashfirst(n);
                hashfirst(n);
                s="dot";
            }
            else{
                dotfirst(n);
                dotfirst(n);
                s="hash";
            }
        }
      
    }
    return 0;
}