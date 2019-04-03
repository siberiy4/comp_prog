//http://wk1080id.hatenablog.com/entry/2018/01/14/021319
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    long N,K;
    cin>>N>>K;
    vector<long> vec(N);
    for(auto &x:vec){
        cin>>x;

    }
    long gc=vec[0];
    for(int i=1;i<N;++i){
        gc=__gcd(gc,vec[i]);
    }

    long ma=*max_element(vec.begin(),vec.end());

    if(K>ma||K<gc||K%gc!=0){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }


    cout<<"POSSIBLE"<<endl;



}