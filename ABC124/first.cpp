#include<bits/stdc++.h>

using namespace std;

int main(){
    long long A=0,B=0,C=0,D=0,N=0,ans=0;
    string S;



    vector<long long> vec(2);

    cin>>vec[0]>>vec[1];

    sort(vec.begin(),vec.end());

    ans+=vec[1];

    vec[1]--;
    sort(vec.begin(),vec.end());

    ans+=vec[1];


    cout<<ans<<endl;

}