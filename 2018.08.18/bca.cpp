#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M,Q;
    cin>>N>>M>>Q;

    vector<pair<int,int>> dia(M);
    for(auto &&x:dia){
        cin>>x.first>>x.second;
    }
    
    vector<pair<int,int>> que(Q);
    for(auto &&x:que){
        cin>>x.first>>x.second;
    }

    sort(dia.begin(),dia.end());
    sort(que.begin(),que.end());




    int pre=0;
    for(int i=0;i<Q;++i){
        int count=0;
        for(int k=0;k<M;++k){

        }
    }
}