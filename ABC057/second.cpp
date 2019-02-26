#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;

    vector<pair<long,long>> nowp(N);
    for(auto &x:nowp){
        cin>>x.first>>x.second;
    }

    vector<int> minpoint(N);
    vector<pair<long ,long>> checkp(M);
    for(auto &x:checkp){
        cin>>x.first>>x.second;
    }

    for(int i=1;i<M;++i){
        for(int k=0;k<N;++k){
            if(abs(checkp[i].first-nowp[k].first)+abs(checkp[i].second-nowp[k].second)<abs(checkp[minpoint[k]].first-nowp[k].first)+abs(checkp[minpoint[k]].second-nowp[k].second)){
                minpoint[k]=i;
            }
        }
    }


    for(auto &x:minpoint){
        cout<<x+1<<endl;
    }

}