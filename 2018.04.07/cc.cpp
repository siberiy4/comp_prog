#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    int a,b,N=0,M=0,tmp=0;
    cin>>N>>M;
    int road[55]={};

    for(int i=0;i<M;i++){
        cin>>a>>b;
        road[a]++;
        road[b]++;
    }

    for(int i=1;i<=N;i++){ 
        cout<<road[i]<<endl;
    }
}