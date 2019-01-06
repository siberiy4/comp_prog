#include<bits/stdc++.h>
using namespace std;


int main(){
    int N;

    cin>>N;

    vector<int> vec(N);

    int tmp=0;
    int ans=0;

    for(auto &x:vec){
        cin>>x;
    }

    int ave=accumulate(vec.begin(), vec.end(), 0)/N ;

    for(int i=1;i<N;++i){
        vec[i]+=vec[i-1];
    }


    bool tes =true;

    for(int i=0;i<N;++i){


        if(tes&&vec[i]==ave*(i+1)){
            ans+=i;
            tmp=i;
            tes=false;
        }else if(vec[i]-vec[tmp]==ave*(i-tmp)&&i!=tmp){
            ans+=i-tmp-1;
            tmp=i;
        }
    }

    if(vec[N-1]%N!=0){
        ans=-1;
    }

    cout<<ans<<endl;
}