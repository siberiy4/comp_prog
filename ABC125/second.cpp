#include<bits/stdc++.h>

using namespace std;

int main(){
    long long A=0,B=0,C=0,D=0,N=0,ans=0;
    string S;



    cin>>N;
    vector<long long> vec(N);
    vector<long long> tt(N);

    for(int i=0;i<N;++i)
    {
            cin>>vec[i];
                }
    
    for(int i=0;i<N;++i)
    {
            cin>>tt[i];

    }

    for(int k=0;k<=(1<<N);++k){
        long cos=0,eki=0;
        for(int i=0;i<N;++i){
            if(k&(1<<i)){
                eki+=vec[i];
                cos+=tt[i];
            }
        }
        if(ans<eki-cos){ 
            ans=eki-cos;
        }
    }





    cout<<ans<<endl;

}