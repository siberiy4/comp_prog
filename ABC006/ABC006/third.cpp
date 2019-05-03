#include<iostream>

using namespace std;

int main(){
    long long N,M;
    cin>>N>>M;

    long A,B,C;

    for(long i=0;i<=N;++i){
        for(long k = 0; k <= 1; k++)
        {
            C=N-i-k;
            if(i*2+k*3+C*4==M){
                cout<<i<<" "<<k<<" "<<C<<endl;
                return 0;
            }
        }
        
    }

    cout<<"-1 -1 -1"<<endl;

}