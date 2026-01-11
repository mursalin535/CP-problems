#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    string s;cin>>s;
    int n=s.size();
    int count=0;int j;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0')count++;
        else{
            j=i;
            break;
        }
    }
    for(int i=0;i<j;i++){
        if(s[i]!='0')count++;
    }
    cout << count << endl;
 }
    return 0;
}