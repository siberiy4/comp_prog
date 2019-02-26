#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long N;

    cin>>N;

    long long ans=to_string(N).size();

    for(long i=2;i*i<=N;++i){
        if(N%i==0){
            long long tmp=to_string(N/i).size();
            ans=min(ans,tmp);
        
        }
    }

    cout<<ans<<endl;

}