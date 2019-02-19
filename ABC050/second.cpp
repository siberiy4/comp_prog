#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int N,M;
    cin>>N;
    vector<long> vec(N);
    long long sums=0;
    for(auto &x:vec){
        cin>>x;
        sums+=x;
    }
    cin>>M;
    vector<long> sum(M);
    for(int i=0;i<M;i++){
        int P,X;
        cin>>P>>X;
        sum[i]=sums-vec[P-1]+X;

    cout<<sum[i]<<endl;

    }



}