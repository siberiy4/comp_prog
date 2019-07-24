#include<iostream>
#include<vector>

using namespace std;

int main(){
    long N,K;

    cin>>N>>K;

    vector<long> vec(N);

    for (auto &x : vec)
    {
        cin>>x;
    }
    long sum=0;
    for (int i = 0; i < N; i++)
    {
        sum+=vec[i];
        if(i>=2){
            if(i>2){
                sum-=vec[i-3];
            }

            if(sum<K){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }

    cout<<-1<<endl;
    
}