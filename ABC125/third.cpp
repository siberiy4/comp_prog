#include<bits/stdc++.h>

using namespace std;

int main(){
    long long A=0,B=0,C=0,D=0,N=0,ans=0;
    string S;



    cin>>N;
    vector<long long> vec(N);
    for (auto & x : vec)
    {
        cin>>x;
    }
    
        sort(vec.rbegin(),vec.rend());

    if(N<3){
        cout<<vec[0]<<endl;
        return 0;
    }

set<long long> gg;

    for(int i=1;i<N;++i){
        long long tmp=__gcd(vec[i+1],vec[i]);
        gg.insert(tmp);
    }




}