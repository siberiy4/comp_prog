#include<bits/stdc++.h>

using namespace std;

int main(){

    long long N;
    cin>>N;
    string S;
    cin>>S;
    long long R=0,B=0;


    for(auto &x:S){
        if(x=='R')R++;
        else{
            B++;
        }

    }


    if(R>B)cout<<"Yes"<<endl;
    else{
        cout<<"No"<<endl;
    }
    
}