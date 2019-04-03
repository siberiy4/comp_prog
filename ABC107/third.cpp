#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

int main(){
    long N,K;
    cin>>N>>K;
    vector<long long > vec(N);
    for(long i=0;i<N;++i){
        cin>>vec[i];
    }

    

    long long ans=1e9;
    for(long i=0;i<=N-K;++i){
        if(vec[i+K-1]<=0){
            ans=min(ans,abs(vec[i]));
        }else if(0<=vec[i]){
            ans=min(ans,abs(vec[i+K-1]));            
        }else{
            ans = min({ans, abs(vec[i]) * 2 + vec[i + K - 1], abs(vec[i]) + vec[i + K - 1] * 2});
        }
    }

    cout<<ans<<endl;

}