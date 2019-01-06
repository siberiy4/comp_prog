#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    vector<long long int> L(85);

    cin>>N;
    L[0]=2;
    L[1]=1;
    if(N>1){
        for(int i=2;i<=N;i++){
            L[i]=L[i-1]+L[i-2];
        }
    }
    cout<<L[N]<<endl;
}