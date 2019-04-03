#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int N,K;
    cin>>N>>K;
    vector<long long> vec(N);

    for(auto& x : vec)
    {
        cin>>x;
    }
    

    sort(vec.begin(),vec.end());

    double ans=0;

    for(int i=N-K;i<N;++i){
        ans+=vec[i];
        ans=ans/2;
    }


    printf("%.6f\n",ans);


}