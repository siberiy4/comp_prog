#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N,limit;
    cin>>N>>limit;

    vector<pair<int,int>> route;
    
    for(int i = 0; i < N; i++)
    {
        pair<int,int> cost;

        cin>>cost.first>>cost.second;
        if(cost.second<=limit){
            route.emplace_back(cost);
        }

    }

    sort(route.begin(),route.end());
    if(route.empty()){
        cout<<"TLE"<<endl;
        return 0;
    }

    cout<<route[0].first<<endl;
    

    return 0;
}
