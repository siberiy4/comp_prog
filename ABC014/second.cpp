#include<iostream>
#include<vector>
#include<bitset>

using namespace std;


int main(int argc, char const *argv[])
{
    int N,X;
    cin>>N>>X;
    bitset<22> bb(X);


    vector<int> vec(N);

    for(auto &x:vec){
        cin>>x;
    }
    long ans=0;

    for(int i=0;i<N;++i){
        if(bb[i]){
            ans+=vec[i];
        }
    }


cout<<ans<<endl;

    return 0;
}
