#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N,M,C;
    cin>>N>>M>>C;
    vector<long long> B(M);
    for(auto& x:B)cin>>x;

    long long ans=0;

    for(long long i=0;i<N;++i){
        long long now=C;
        vector<long long > tmp(M);
        for(long long k=0;k<M;++k){
            cin>>tmp[k];
            now+=tmp[k]*B[k];
        }
        if(now>0)ans++;
    }

    cout<<ans<<endl;
}