#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N=0,K;
    cin>>N>>K;

    vector<long long > hoge(N);

    for(auto &x:hoge){
        cin>>x;
    }

    sort(hoge.begin(),hoge.end());

    vector<long long> sa;

    for(int i=0;(i+(K-1))<N;++i){

    long tmp=hoge[(i+(K-1))]-hoge[i];
        sa.emplace_back(tmp);

    }



    cout<<*min_element(sa.begin(),sa.end())<<endl;

}