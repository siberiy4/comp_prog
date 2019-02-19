#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N,K;
    cin>>N>>K;
    vector<int> vec(N);
    for(auto &x:vec){
        cin>>x;

    }

    sort(vec.begin(),vec.end());

    double ans=0;
    for(int i=0;i<K;i++){
        ans+=(double)vec[(N)-K+i];
        ans/=2.0;
    }

    cout<<ans<<endl;

    return 0;
}
