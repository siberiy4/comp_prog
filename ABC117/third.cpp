#include<bits/stdc++.h>

using namespace std;


int  main(){
    int N=0,M;
    cin>>N>>M;
    vector<long> tes(M);

    for(auto &x:tes){
        cin>>x;

    }
    if(N>=M){
        cout<<0<<endl;
        return 0;
    }
    long long ans=0;

    sort(tes.begin(),tes.end());

    vector<vector<long>> res(M);

    for(int i=0;i<M;++i){ 
        
    }


    cout<<ans<<endl;
}