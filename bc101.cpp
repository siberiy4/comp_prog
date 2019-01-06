#include<bits/stdc++.h>
using namespace std;
int main(){
    int S=0;
    long long N=0,K=0,tt=0,ans=1,min=10000000;
    cin>>N>>K;

    vector<int> rrr(N);

    for(int i=0;i<N;i++){
        cin>>rrr[i];
    }

    ans+=(N-K)/(K-1);
    if((N-K)%(K-1)>0){
        ans++;
    }

    cout<<ans<<endl;

}