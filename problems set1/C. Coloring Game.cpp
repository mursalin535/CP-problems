#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
   int max= *max_element(a.begin(), a.end());
   int maxindex = max_element(a.begin(), a.end()) - a.begin();
   int ans=0;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(i!=maxindex && j!=maxindex && k!=maxindex){
                if(a[i] + a[j] + a[k] > max){
                    ans = 1;
                    break;
                }
            }
            else{
                if(i==maxindex){
                    if(a[j] + a[k] > max){
                        ans = 1;
                        break;
                    }
                }
                else if(j==maxindex){
                    if(a[i] + a[k] > max){
                        ans = 1;
                        break;
                    }
                }
                else if(k==maxindex){
                    if(a[i] + a[j] > max){
                        ans = 1;
                        break;
                    }
                }
            }

        }
    }
   }
   cout<<ans<<endl;
   
 }
    return 0;
}