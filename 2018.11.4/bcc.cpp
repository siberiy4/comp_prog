#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    deque<pair<int,int>> city(M);
    deque<deque<int>>count(N+1);

    for(int i=0;i<M;i++){
        cin>>city[i].first>>city[i].second;
        
        count[city[i].first].emplace_back(city[i].second);
        cout<<"a ";
    }


    sort(count.begin(),count.end());

    for(int i=0;i<M;i++){

        for(int k=0;k<count[city[i].first].size();++k){
            if(count[city[i].first][k]==city[i].second){
                printf("%06d%06d\n",city[i].first,k+1);
            }
        }

    }
}