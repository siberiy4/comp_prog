#include<bits/stdc++.h>
using namespace std;
int main(){
    //int a=0,b=0,N=0,S=0;
    int N=0,M=0,ans=0;
    string tmp;
    map<string,int> saidai;

    cin>>N;
    for(int i=0;i<N;i++){
        cin>>tmp;
        saidai[tmp]++;
    }
    cin>>M;
    for(int i=0;i<M;i++){
        cin>>tmp;
        saidai[tmp]--;
    }

    for(auto itr=saidai.begin();itr != saidai.end();++itr){
        if(itr==saidai.begin())ans=itr->second;
        if(itr->second>ans)ans=itr->second;
    }

    if(ans<0)ans=0;

    cout<<ans<<endl;
}