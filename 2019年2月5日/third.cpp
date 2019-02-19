#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<long> vec(N);
    long ans=0;

    for(auto &x:vec){
        cin>>x;
        if(x==0)ans++;
    }


    vector<vector<long>> ado(N);


    for(int i=0;i<N;++i){
        ado[i].emplace_back(vec[i]);
    }
    for(int i=0;i<N;++i){
        for(int k=i+1;k<N;++k){
            ado[i].emplace_back(ado[i].back()+vec[k]);
            if(ado[i].back()==0)ans++;
        }
    }

    cout<<ans<<endl;
}