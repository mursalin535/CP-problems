#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n=s.length();

        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(s[i]=='*' && s[i+1]=='*'){
                flag=false;
                break;
            }
            else if(s[i]=='>' && s[i+1]=='*'){
                flag=false;
                break;
            }
            else if(s[i]=='*' && s[i+1]=='<'){
                flag=false;
                break;
            }
            else if(s[i]=='>' && s[i+1]=='<'){
                flag=false;
                break;
            }
            
            

        }
        if(!flag)cout<<-1<<endl;
        else{

            if(s[0]=='>' || s[n-1]=='<')cout<<n<<endl;
            else{

                int right,left;
                for(int i=0;i<n;i++){
                    if(s[i]=='>'){
                        right=i;
                        break;
                    }
                }
                for(int i=0;i<n;i++){
                    if(s[i]=='>' || s[i]=='*'){
                        left=i;
                        break;
                    }
                }

                int ans1=n-right+(s[right-1]=='*' ? 1:0);
                int ans2=left+(s[left]=='*' ? 1:0);

                cout<<max(ans1,ans2)<<endl;
            }

            
        }
    }
    return 0;
}