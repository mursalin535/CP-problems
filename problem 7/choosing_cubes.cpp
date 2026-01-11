#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,f,k;cin>>n>>f>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        int fav=arr[f-1];
        sort(arr.begin(), arr.end(), greater<int>());

        vector<int>removed(k);
        for(int i=0;i<k;i++){
            removed[i]=arr[i];
        }

        if(find(removed.begin(), removed.end(), fav) == removed.end()){
            cout<<"NO"<<endl;
        }
        else{
            if(find(arr.begin()+k,arr.end(), fav) != arr.end()){
                cout<<"MAYBE"<<endl;

            }
            else{
                cout<<"YES"<<endl;
            }
        }
        
    }
}