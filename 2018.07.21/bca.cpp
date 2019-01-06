#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0,A=0,B=0,C=0;
    string str;
    vector<int> vec(3);

    int ans=0;

    cin>>vec[0]>>vec[1]>>vec[2];

    sort(vec.begin(),vec.end());

    ans=abs(vec[2]-vec[1])+abs(vec[1]-vec[0]);

    cout<<ans<<endl;
}