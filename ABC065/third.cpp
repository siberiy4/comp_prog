#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    long N,M;

    cin>>N>>M;

    long ans=1;

    for(int i=1;i<=N;++i){
        ans*=i;
        ans=ans%(long)(1e9+7);
    }

    for(int i=1;i<=M;++i){
        ans*=i;
        ans=ans%(long)(1e9+7);
    }


    if(N==M){
        cout<<(ans*2)%(long)(1e9+7)<<endl;
    }else if(N-1==M||N+1==M){
        cout<<ans<<endl;
    }else{
        cout<<0<<endl;
    }




    return 0;
}
