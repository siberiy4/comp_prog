//Airport bus

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    long capa,lim;
    cin>>N>>capa>>lim;

    vector<long> arrival(N);

    for(auto &x:arrival){
        cin>>x;
    }

    sort(arrival.begin(),arrival.end());

    int curr=0;
    int cnt_bus=0;
    int kyaku=1;

    for(int i=1;i<N;++i){
        kyaku++;
        if(kyaku>capa){
            kyaku-=capa;
            cnt_bus++;
            curr=i;
        }else if((arrival[curr]+lim)<arrival[i]){
            cnt_bus++;
            kyaku=1;
            curr=i;
        }

    
    }

    if(kyaku>0){
        cnt_bus++;
    }

    cout<<cnt_bus<<endl;

}