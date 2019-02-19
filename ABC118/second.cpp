#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N,M;
    cin>>N>>M;
    vector<int> vec(M);

    for(int i=0;i<N;++i){
        int K;
        cin>>K;
        for(int k=0;k<K;++k){
            int A;
            cin>>A;
            vec[A-1]++;
        }
    }

int ans=0;
    for(int i=0;i<M;++i){
        if(vec[i]==N){
            ans++;
        }

    }

    cout<<ans<<endl;

}