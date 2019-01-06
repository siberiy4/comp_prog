#include<bits/stdc++.h>

using namespace std;

int main(){
    string S;

    cin >>S;


    if()
    for(int i=0;i<=S.size();i++){
        if(S[i]=='K'){
            for(int j=S.size()+1;j>i;j--){
                S[i]=S[i-1];
            }
            S[i]='A';
        }
        else if(S[i]=='H'||S[i]=='B'||S[i]=='R'){
            for(int j=S.size()+1;j>i+1;j--){
                S[i]=S[i-1];
            }
            S[i+1]='A';            
        }
    }

    if(S=="AKIHABARA"){
        cout<<"Yes"<<endl;
        cout<<S<<endl;
    }
    else{
        cout<<"No"<<endl;
        cout<<S<<endl;
    }
}