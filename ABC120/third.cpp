#include<bits/stdc++.h>

using namespace std;




int main(){
    long long N;
    long ans=0;
    string S;
    double Q;

    cin>>S;

    vector<bool> bb(S.size());

    bool check=true;

    while(check){
        bool tes=false; 
        for(long i=1;i<S.size();++i){
            if(S[i]=='0'&&S[i-1]=='1'||S[i]=='1'&&S[i-1]=='0'){
                tes=true;
                ans++;
                S.erase(S.begin()+i-1);
                S.erase(S.begin()+i-1);
                i=max((long)(i-2),0L);
            }
        }

        if(!tes)check=false;
    }


    cout<<ans*2<<endl;
}