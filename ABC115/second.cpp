#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N=0;
    cin>>N;

    vector<int> pi(N);
    for(auto &x:pi){
        cin>>x;
    }


    sort(pi.begin(),pi.end());

    pi[N-1]/=2;

    cout<<accumulate(pi.begin(),pi.end(),0)<<endl;
}