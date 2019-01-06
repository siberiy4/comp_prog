#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N,K;
    cin>>N>>K;

    vector<int> vec(N);


    for(auto &x:vec){
        cin>>x;
    }

    long sum=0;

    for(int i=0;i<N;++i){
        int tmp=min(vec[i],K-vec[i]);
        sum+=tmp*2;
    }

    cout<<sum<<endl;


    return 0;
}
