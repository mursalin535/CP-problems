#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        
        string result;
        unordered_set<int> skip;

        int j=0;
        vector<int> capital,small;

        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch!='b' && ch!='B' && ch>='a' && ch<='z'){
                result.push_back(ch);  // Changed from result[j]=ch
                small.push_back(j);
                j++;
            }
            else if(ch!='b' && ch!='B' && ch>='A' && ch<='Z'){
                result.push_back(ch);  // Changed from result[j]=ch
                capital.push_back(j);
                j++;
            }
            else if(ch=='b'){
                if(!small.empty()){
                    skip.insert(small.back());
                    small.pop_back();
                }
            }
            else if(ch=='B'){
                if(!capital.empty()){
                    skip.insert(capital.back());
                    capital.pop_back();
                }
            }
        }
        
        if(result.empty()){
            cout<<endl;  // Changed from cout<<" "<<endl
            continue;
        }
        
        for(int k=0;k<result.size();k++){
            if(skip.find(k)==skip.end()){
                cout<<result[k];
            }
        }
        cout<<endl;
    }
    return 0;
}