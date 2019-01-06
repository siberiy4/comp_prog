#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    int N, M;
    cin >>N;
    vector<int> D(N-1);
    for(int i=0; i<N-1;++i){
        cin >>D[i];
    }
    cin >>M;
    vector<int> T(M-1);
    for(int i=0; i<M-1;++i){
        cin >>T[i];
    }

    for(int i=0;i<M-1;++i){
        for(int o=0;o<N-1){
            if(T[i]==D[o]){
                
            }
        }
    }

    cout <<  << endl;

    return 0;

}