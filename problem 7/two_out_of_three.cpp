#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int mx=*max_element(a.begin(),a.end());
        vector<int>freq(mx+1,0);
        for(int i=0;i<n;i++) freq[a[i]]++;

        int count=0;
        pair<int,int>elems;
        bool first=true;
        for(int i=0;i<=mx;i++){
            if(freq[i]>=2){
                count++;
               
                
            }
        }
            if(count<2)cout<<-1<<endl;
            else{

                for(int i=0;i<=mx;i++){
            if(freq[i]>=2){
                if(first){
                    elems.first=i;
                    first=false;
                }
                else {elems.second=i;break;}
            }
                
            }

            pair<stack<int>,stack<int>>index;

            for(int i=0;i<n;i++){
                if(a[i]==elems.first) index.first.push(i);
                if(a[i]==elems.second) index.second.push(i);
            }

            for(int i=0;i<n;i++){
                a[i]=1;
            }

            int x=index.first.top();
            a[x]=1;
            index.first.pop();
            x=index.first.top();
            a[x]=2;
            index.first.pop();

            x=index.second.top();
            a[x]=1;
            index.second.pop();
            x=index.second.top();
            a[x]=3;
            index.second.pop();

            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";


            }
            cout<<endl;
        }
    
   
}
 return 0;
}