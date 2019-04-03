#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N,M;

    cin>>N>>M;

    vector<pair<long long,long long>> vec(N);
    for(auto &x:vec){
        cin>>x.first>>x.second;
    }

    sort(vec.begin(),vec.end());
    long long ans=0,sum=0;
    long long i=0;

    while(sum<M){
        if(vec[i].second<=M-sum){
            sum+=vec[i].second;
            ans+=vec[i].second*vec[i].first;
        }else{
            ans+=(M-sum)*vec[i].first;
            sum=M;
        }


        ++i;
    }
    

    cout<<ans<<endl;
}