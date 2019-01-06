#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;

    vector<long> tori={0,0,1};

    for(int i=3;i<N;++i){
        long tmp=(tori[i-1]+tori[i-2]+tori[i-3])%10007;

        tori.emplace_back(tmp);
    }

    cout<<tori[N-1]<<endl;


    return 0;
}
