#include<vector>
#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    vector<int> play(N);

    for(auto &x:play){
        cin>>x;
    }

    sort(play.begin(),play.end());

    int add=0;

    vector<int> rate(8);

    for(int i=0;i<N;++i){
        for(int k=1;k<=8;++k){
            if(play[i]<(400*k)){
                rate[k-1]=1;
                break;
            }
        }
        if(play[i]>=3200){
            add++;
        }
    }
    int m=0;
    if(accumulate(rate.begin(),rate.end(),0)==0){
        m=1;
    }

    cout<<accumulate(rate.begin(),rate.end(),0)+m<<" "<<(accumulate(rate.begin(),rate.end(),0)+add)<<endl;

    return 0;
}
