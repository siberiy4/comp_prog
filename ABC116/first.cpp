#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

    vector<int> vec(3);

    for(auto &x:vec){
        cin>>x;
    }

    sort(vec.begin(),vec.end());

    long long ans=vec[0]*vec[1]/2;


    cout<<ans<<endl;


    return 0;
}

