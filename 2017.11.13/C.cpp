#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,m,k,countA,countB;

    cin>>n;
    cin>>m;
    vector<int> A(2*n+1),B(2*n+1);

    countA=1;
    countB=n+1;
    for(int i=1;i<2*n+1;i++){
        A[i]=i;
        B[i]=A[i];
    }

    for(int i=0;i<m;i++){
        cin>>k;
        if(k==0){
            for(int j=1;j<2*n+1;j++){
                if(j%2==0){
                    A[j]=B[countB];
                    countB++;
                }
                else{
                    A[j]=B[countA];
                    countA++;
                }
            }
        countA=1;
        countB=n+1;
        }
        else{
            for(int j=1;j<=2*n-k;j++){
                A[j]=B[j+k];
            }
            for(int j=1;j<=k;j++){
                A[j+2*n-k]=B[j];
            }
        }
        for(int j=1;j<2*n+1;j++){
        B[j]=A[j];
        }
    }
    for(int i=1;i<=2*n;i++){
        cout<<A[i]<<endl;
    }

}