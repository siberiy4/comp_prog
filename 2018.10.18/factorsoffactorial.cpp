#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N;

    cin>>N;

    long long factional=1,ans=0;
    long tmp;
    vector<int> check(N);

    for(int i=1;i<=N;++i){
        for(int k=2;k<=N;k++){
            if(i%k==0){
                check[k]++;
                cout<<check[k]<<" "<<i<<endl;
            }
        }
    }

    for(int i=2;i<=N;++i){
        if(check[i]>0){
            ans+=check[i];
        }
    }

    cout<<ans<<endl;

}