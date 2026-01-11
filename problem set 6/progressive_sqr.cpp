#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,c,d;cin>>n>>c>>d;

        vector<int>b(n*n);

        for(int i=0;i<n*n;i++){
            cin>>b[i];
        }

        int a11=(*max_element(b.begin(),b.end()))-(c*(n-1))-(d*(n-1));

        vector<int>real(n*n);

        int j=0,y=0;

        for(int i=0;i<n;i++){
            int x=0;
            for(int k=0;k<n;k++){
                 real[j++]=a11+x+y;
                 x+=d;
            }
            y+=c;
        }

        sort(b.begin(),b.end());
        sort(real.begin(),real.end());

        bool flag=true;
        for(int i=0;i<n*n;i++){
            if(b[i]!=real[i]){
                flag=false;
                break;
            }
        }

        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}