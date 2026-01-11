#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr(n);
        vector<int> even, odd;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i] % 2 == 0){
                even.push_back(arr[i]);
            }
            else{
                odd.push_back(arr[i]);
            }
        }
        if(n<=1000){
            bool found = false;
            sort(arr.begin(), arr.end());
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if((arr[j]%arr[i])%2==0){  // This line has the bug
                        cout<<arr[i]<<" "<<arr[j]<<endl;
                        found = true;
                        break;
                    }
                }
                if(found) break;
            }
            if(!found){
                cout<<"-1"<<endl;
            }
        }
        else{
        if(even.size()>=2){
            cout<<even[0]<<" "<<even[1]<<endl;
        }
        else{
            bool found = false;
            sort(odd.begin(), odd.end());
            for(int i=1;i<odd.size();i++){
                if(odd[i]>odd[i-1] && odd[i]<2*odd[i-1]){
                    cout<<odd[i-1]<<" "<<odd[i]<<endl;
                    found = true;
                    break;
                }
            }
            if(!found){
                cout<<"-1"<<endl;
            }
        }
    }
    }
    return 0;
}