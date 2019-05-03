#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    long N;string S;
    cin>>N>>S;
    vector<int> we(N);
    vector<int> ea(N);
    long ans=1e9;
    
    if(S[0]=='W'){
        we[0]++;
    }else{
        ea[0]++;
    }
    for(long i = 1; i < N; i++)
    {
        we[i]=we[i-1];
        ea[i]=ea[i-1];
        if(S[i]=='W'){
            we[i]++;
        }else{
            ea[i]++;
        }
    }
    
    for(int i=0;i<N;++i){
        long tmp=0;
        tmp=(ea[N-1]-ea[i])+we[i];

    if(i==0)tmp-=we[i];
    ans=min(ans,tmp);

    }

    cout<<ans<<endl;

}
