#include<iostream>

using namespace std;

int main(){
    int K,S;
    cin>>K>>S;

    long ans=0;

    for(int i=0;i<=K;++i){
        for(int k=0;k<=K;++k){
            int z=S-k-i;
            if(z>=0&&z<=K){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}