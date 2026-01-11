        #include<bits/stdc++.h>
        using namespace std;
        int main(){
            int t;cin>>t;
            while(t--){
                string s;cin>>s;
                if(s.size()==1){
                    cout<<-1<<endl;
                    continue;
                }
                bool flag=false;
                int x;
                for(int i=0;i<s.size()-1;i++){
                    if(s[i]==s[i+1]){
                        x=i;
                        flag=true;
                        break;
                    }
                }
                if(flag)cout<<s[x]<<s[x+1]<<endl;
                else{
                    for(int i=0;i<s.size()-2;i++){
                        if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2]){
                            x=i;
                            flag=true;
                            break;
                        }
                    }
                    if(flag)cout<<s[x]<<s[x+1]<<s[x+2]<<endl;
                    else cout<<-1<<endl;
                }
            }
        }