#include<bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[])
{

    int N,M;
    cin>>N>>M;

    vector<int> happy(M);
    deque<pair<int,int>>    road(M);

    vector<vector<bool>> root(N,vector<int>(N));

    for(int i=0;i<M;++i){
        cin>>road[i].first>>road[i].second>>happy[i];
        root[road[i].first][road[i].second]=true;
        root[road[i].second][road[i].first]=true;
    }







    return 0;
}
