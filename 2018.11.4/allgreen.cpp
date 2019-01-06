#include<iostream>
#include<vector>


using namespace std;

int main(int argc, char const *argv[])
{
    int D,G;
    cin>>D>>G;
    vector<pair<int,int>> ploblems(D);
    vector<long> point_max(D);

    for(auto &x:ploblems){
        cin>>x.first>>x.second;
    }

    for(int i=0;i<=D;++i){
        point_max[0]=ploblems[i].first*(i+1)+ploblems[i].second;
    }

    int nowpoint=0,ans=0;

    for(int i=0;i<D;++i){
        for(int k=ploblems[i].first;k>0;--k){
            ans++;
            nowpoint+=(i+1)*100;
            if(k==1)nowpoint+=ploblems[i].second;

            if(nowpoint>G){
                cout<<ans<<endl;
                return 0;
            }
        }
    }

    return 0;
}
