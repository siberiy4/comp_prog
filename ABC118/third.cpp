#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main(){
    long long N;
    cin>>N;

    deque<long long> vec(N);
    for(auto &x:vec){
        cin>>x;
    }
    long long min=vec[0];

    for(long i=1;i<N;++i){
        min=__gcd(min,vec[i]);
    }


    cout<<min<<endl;
}