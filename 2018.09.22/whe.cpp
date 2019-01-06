#include<iostream>
#include<vector>

using namespace std;


int main(){
    int N=0,C=0,K=0;
    long ans=0;
    cin>>N>>C>>K;
    vector<long> T(N);

    for(auto &&x:T){
        cin>>x;
    }

    int tmp=0;
    int count=0;

    for(int i=0;i<N;++i){
        if(T[tmp]+K<T[i]||count==0){
            count=0;
            tmp=i;
            ans++;
        }
    }



    cout<<ans<<endl;

}
