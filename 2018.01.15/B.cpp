#include<iostream>
using namespace std;

int main(){
    int ans=1,b,N,K;
    cin>>N>>K;

    for(int i=0;i<N;i++){
        if(ans*2<ans+K){
            ans=ans*2;
        }else{
            ans=ans+K;
        }
    }

    cout<<ans<<endl;
}