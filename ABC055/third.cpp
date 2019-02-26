#include<iostream>

using namespace std;

int main(){
    long long N,M;
    long long ans=0;

    cin>>N>>M;

    if(N>M/2){
        cout<<M/2<<endl;
        return 0;
    }else{
        ans+=N;
        ans+=(M-2*N)/4;
        cout<<ans<<endl;
    }
}