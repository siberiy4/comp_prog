#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<pair<int,int>> v(N);

    for (auto &x : v)
    {
        cin>>x.first>>x.second;
    }

    pair<int,int> max={0,1};
    
    for (int i = 0; i < N-1; i++)
    {
        for (int k = i+1; k < N; k++)
        {
            long tmp=pow(v[i].first-v[k].first,2)+pow(v[i].second-v[k].second,2);
            long now=pow(v[max.first].first-v[max.second].first,2)+pow(v[max.first].second-v[max.second].second,2);
            if(tmp>now){
                max.first=i;
                max.second=k;
            }
        }

        
        
    }

            long now=pow(v[max.first].first-v[max.second].first,2)+pow(v[max.first].second-v[max.second].second,2);
cout<<sqrt(now)<<endl;
    
}