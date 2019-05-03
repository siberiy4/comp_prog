#include<bits/stdc++.h>

using namespace std;

int main(){

long N;
cin>>N;

vector<long long> vec(N);
vector<pair<long long,int>> tame(N-1);
for(long i=0;i<N;++i){
    cin>>vec[i];
    if(i!=0){ 
        tame[i-1]={vec[i-1]+vec[i],(vec[i-1]<0)+(vec[i]<0)};
    }
}

bool be=false;
for(int i=0;i<N-1;++i){
    if(tame[i].first<0){
        tame[i].first*=-1;
        if(be){
            vec[i-1]*=-1;
        }
        be=true;
    }


    
    
}
long long ttt=0;
for(int i=0;i<tame.size();++i){
    ttt+=tame[i].first;
}
cout<<ttt<<" ";

long long ans=ttt- accumulate(vec.begin(),vec.end(),-vec[0]);
cout<<ans<<endl;

}