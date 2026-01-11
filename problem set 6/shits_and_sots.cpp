    #include<bits/stdc++.h>
    using namespace std;

int main(){
        long long  t; cin >> t;
        while(t--){
    string s;
    cin>>s;

    long long  one=-1;

    for(long long  i=0;i<s.length();i++){
    if(s[i]=='1'){
        one=i+1;
        break;
    }

    }

    if(one==s.length()|| one==-1){
        cout<<0<<endl;
        continue;
    }

    vector<long long >zero_position;


    for(long long  i=one;i<s.length();i++){
        if(s[i]=='0'){
            zero_position.push_back(i+1);
        }
    }



    sort(zero_position.begin(),zero_position.end());





    long long  j=one;
    long long  cost=0;

    for(long long  i=0;i<zero_position.size();i++){



        cost+=(zero_position[i]-(j++)+1);

        
    }
    cout<<cost<<endl;

        }
    }