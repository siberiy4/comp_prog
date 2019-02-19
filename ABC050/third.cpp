#include<iostream>
#include<vector>
#include<cmath>

using namespace std;


int main(){
    long N;
    cin>>N;
    vector<long> vec(N);
    for(int i = 0; i < N; i++)
    {
        int tmp;
        cin>>tmp;
        vec[tmp]++;
    }
    vec[0]++;
    for(int i=1-N%2;i<N;i+=2){
        if(vec[i]!=2){
            cout<<0<<endl;
            return 0;
        }

    }

    long long ans=1;

    long long wari=pow(10,9)+7;

    for(int i=0;i<N/2;++i){
        ans=ans*2%wari;
    }

    cout<<ans<<endl;
}