#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int turn=1;
        int i=0,j=n-1;
        while(i<j){
            if(turn%2!=0){
                if(a[i]<a[j]){
                    cout<<'L';
                    i++;
                } else {
                    cout<<'R';
                    j--;
                }
                turn++;

            }
            else{
                if(a[i]>a[j]){
                    cout<<'L';
                    i++;
                } else {
                    cout<<'R';
                    j--;
                }
                turn++;
            }
        }
        cout<<endl;
    }
}
