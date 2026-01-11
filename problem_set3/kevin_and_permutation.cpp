#include <iostream>
#include <vector>

using namespace std;

int main() {
 int t;cin>>t;
 while(t--){
    int n,k;cin>>n>>k;
    if(k==1){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    else{
        vector<int>a(n,0);
        vector<int>freq(n+1,0);
        int x=k;
        int j=1;
        for(int i=0;i<n;i++){
            if(i+1==x){
                a[i]=j;
                 freq[j]++;
                j++;
                x=x+k;
               
            }
        }
        int k=1;int i=0;
        while(i<n){
            if(a[i]==0 && freq[k]==0){
                a[i]=k;
                k++;
                i++;
            }
            else if(a[i]==0 && freq[k]!=0){
                k++;
            }

            else i++;
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";

    }
 }   // Your code here
    return 0;
}