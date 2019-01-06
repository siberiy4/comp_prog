#include<iostream>
#include<vector>

using namespace std;


int main(){
    int N=0;
    long ans=0;
    cin>>N;
    vector<long> Avec(N);
    vector<long> Bvec(N);

    for(int i=0;i<N;++i){
        cin>>Avec[i];
        cin>>Bvec[i];

    }

long tmp=0;

    for(int i=N-1;i>=0;--i){

        if((tmp+Avec[i])%Bvec[i]==0){
            continue;
        }else{
        ans+=Bvec[i]-(tmp+Avec[i])%Bvec[i];
        tmp+=Bvec[i]-(tmp+Avec[i])%Bvec[i];
        }

        
    
    }


    cout<<ans<<endl;

}