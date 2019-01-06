#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> in(N);

    for(auto &&x: in){
        cin>>x;
    }

    vector<int> SUM(N+1);
    SUM[0]=0;
    for(int i=0;i<N;i++){
        SUM[i+1]=(SUM[i]+in[i])%M;
    }

    long ans=0;
    map<int,int> mp;

    for(int i=0;i<SUM.size();i++){
        ans+=mp[SUM[i]];
        mp[SUM[i]]++;
    }

    cout<<ans<<endl;

}