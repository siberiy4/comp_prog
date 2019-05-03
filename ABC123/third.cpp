#include<bits/stdc++.h>

using namespace std;
int main(){
    long long N;
    vector<long long> v(5);
    long long ans=5;


    cin>>N;
    for(auto &x:v){
        cin>>x;
    }

    auto minn=min_element(v.begin(),v.end());

    ans+=N/ *minn;

if(N/ *minn>0&&N% *minn==0)ans--;

    cout<<ans<<endl;
}