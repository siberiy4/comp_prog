#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    long N,T;
    cin>>N>>T;

    vector<long long> vec(N);
    long long ans=0;

    cin>>vec[0];

    ans+=T;

    for(long i=1;i<N;++i){
        cin>>vec[i];
        if(vec[i-1]+T<vec[i]){
            ans+=T;
        }else{
            ans+=vec[i]-vec[i-1];
        }
    }


    cout<<ans<<endl;
}