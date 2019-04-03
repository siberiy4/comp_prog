#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){ 
    long N;
    cin>>N;

    vector<long long> v(N);
    map<long long,long long> mp;

    for(auto& x:v){
        cin>>x;
    }

    mp[0]++;
    mp[v[0]]++;
    for(long i=1;i<N;++i){
        v[i]+=v[i-1];
        mp[v[i]]++;
    }
    long long ans=0;

    for(auto itr : mp){
        ans += itr.second * (itr.second - 1) / 2;
    }

    cout<<ans<<endl;

}


