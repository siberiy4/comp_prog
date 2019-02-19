#include<bits/stdc++.h>

using namespace std;


int main(){
    long N;
    cin>>N;
    vector<tuple<long long,long,long>> tapi(N);

    for(int i=0;i<N;++i){
        long t,a;
        cin>>t>>a;
        tapi[i]=make_tuple(t+a,t,a);
    }

    long long ans=0;

    sort(tapi.rbegin(),tapi.rend());

    for(int i=0;i<N;++i){
        if(i%2==0){
            ans+=get<1>(tapi[i]);
        }else{
            ans-=get<2>(tapi[i]);
        }
    }

    cout<<ans<<endl;

}