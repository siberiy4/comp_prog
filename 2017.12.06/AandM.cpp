#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    int ans=1;

    cin>>N;
    cin>>K;

    for(int i=0;i<N;i++){
        if(ans*2>ans+K){
            ans=ans+K;
        }
        else{
            ans=ans*2;
        }
    }

    cout<<ans<<endl;

}