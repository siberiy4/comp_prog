#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    long long  N,K;
    cin>>N>>K;
    vector<long long > time(N);

    for(auto &x:time){
        cin>>x;
    }

    long ans=K*N;

    for(long long  i=1;i<N;++i){
        if(time[i-1]+K>time[i]){
            ans-=(time[i-1]+K-time[i]);
        }
    }


    cout<<ans<<endl;

    return 0;
}
