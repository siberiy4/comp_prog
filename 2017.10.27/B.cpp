#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, M, tmp=0,sum;
    cin >>N;
    vector<int> T(N);

    for(int i=0;i<N;i++){
        cin >>T[i];
    }
    
    cin >>M;
    vector<int> P(M), X(M);

    for(int i=0;i<M;i++){
        cin >>P[i];
        cin >>X[i];
    }

    for(int i=0;i<M;i++){
        for(int j=0;i<N;j++){
            if(P[i]==j){
                tmp=T[j];
                T[j]==X[i];

                for(int k=0;k<N;k++){
                    sum+=T[k];
                }

                cout<<sum<<endl;
                T[j]=tmp;
            }
        }
    }

    return 0;

}