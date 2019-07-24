#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N,ans=0,A,B,C;
    string S;

    vector<long long> v(3);

    for (auto &x : v)
    {
        cin>>x;
    }

    sort(v.begin(),v.end());
    
    cout<<v[0]+v[1]<<endl;
}