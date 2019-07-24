#include<bits/stdc++.h>

using namespace std;

int main(){
    long N,ans=0,A,B,C;
    string S;
    cin>>N>>A>>B>>C;

    deque<int> tmp(N);
    vector<int> vec(N);
    vector<vector<int>> hasi(N);
    vector<int> ans(N-1);
    vector<pair<int,int>> asinokazu(N);


    for (int i = 0; i < N; i++)
    {
        int j,k;
        cin>>j>>k;

        hasi[j].push_back(k);
        hasi[k].push_back(j);
    }

    for (int i=0;i<N;++i)
    {
        asinokazu[i].first=hasi[i].size();
        asinokazu[i].second=i;
    }

    sort(asinokazu.rbegin(),asinokazu.rend());
    


    for (auto &x : tmp)
    {
        cin>>x;
    }

    sort(tmp.begin(),tmp.end());
    


    for (int i = 0; i < N; i++)
    {
        vec[asinokazu[i].second]=tmp.back;
        tmp.pop_back();
    }
        


    cout<<180*(N-2)<<endl;
}