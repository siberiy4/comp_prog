#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin>>S;

    string keye="keyence";

    int i=0;

    for( i=0;i<keye.size();++i){
        if(S[i]!=keye[i]){
            break;
        }
    }

    for(;i<keye.size();++i){
        if(S[S.size()-(keye.size()-i)]!=keye[i]){
            cout<<"NO"<<endl;  
            return 0;
        }
    }

    cout<<"YES"<<endl;



}