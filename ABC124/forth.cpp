#include<bits/stdc++.h>

using namespace std;

int main(){

    long long A=0,B=0,C=0,D=0,N=0,ans=0,K=0;
    string S;

    cin>>N>>K;
    cin>>S;


    vector<long long> vec;


    long long tmp=0;
    bool saka=true;
    for(long i=0;i<N;++i){
        if(saka){
            if(S[i]=='0'){
                vec.push_back(tmp);
                tmp=1;
                saka=false;
            }else{
                tmp++;
            }
        }else{
            if(S[i]=='1'){
                vec.push_back(tmp);
                tmp=1;
                saka=true;
            }else
            {
                tmp++;
            }
            
        }
        if(i==N-1)vec.push_back(tmp);
    }

    if(vec.size()/2<K){
        cout<<accumulate(vec.begin(),vec.end(),0)<<endl;
        return 0;
    }

        long long tu=0;

        for(long k=0;k<=K*2&&k<vec.size();++k){
            tu+=vec[k];
        }
        ans=tu;

    for(long i=K*2+2;i<vec.size();i+=2){

            tu-=vec[A];
            A++;
            tu-=vec[A];

            tu+=vec[i];
            tu+=vec[i-1];


        ans=max(ans,tu);
    }


    cout<<ans<<endl;

}