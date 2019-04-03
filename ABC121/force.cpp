#include<bits/stdc++.h>

using namespace std;


int main(){
    long long N,M;
    cin>>N>>M;


    if(N==M){
        cout<<N<<endl;
        return 0;
    }

    unsigned long long ans=N^M;
    if(N%2==0&&M%2==0){
        ans=N&LONG_LONG_MAX;
    }

    cout<<ans<<endl;
}