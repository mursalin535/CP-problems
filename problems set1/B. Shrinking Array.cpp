#include<bits/stdc++.h>

using namespace std;

bool check(int a[],int first,int last){
    int flag=false;
    for(int i=min(first,last);i<max(first,last)-2;i++){
        int strt=min(a[i+1],a[i+2]);
        int end=max(a[i+1],a[i+2]);
        for(int j=strt;j<=end;j++){
            if(a[i]==j || abs(a[i]-j)==1){
                flag=true;
                break;
            }

        }
        if(flag)break;
    }
    return flag;
}

int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    bool yess=false;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1] || abs(a[i]-a[i+1])==1){
            yess=true;
            break;
        }
    }
    if(yess){
        cout<<"0"<<endl;

    }
    else{

    bool check1=check(a,0,n);
    bool check2=check(a,n-1,2);



    if(check1 || check2){
        cout<<"1"<<endl;}
        else{
        cout<<"-1"<<endl;
        }
    }

 }
    return 0;
}