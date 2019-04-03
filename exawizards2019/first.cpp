#include<bits/stdc++.h>

using namespace std;

int main(){

    long long A,B,C;
    vector<long long> tes(3);

    for(auto &xc:tes){
        cin>>xc;
    }

    sort(tes.begin(),tes.end());


    if(tes[2]==tes[0]&&tes[0]==tes[1]){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }



}