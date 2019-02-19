#include<bits/stdc++.h>

using namespace std;


int main(){
    long N;
    string A,B,C;

    cin>>N>>A>>B>>C;

    long ans=0;
    for(int i=0;i<N;++i){
        if(A[i]==B[i]&&C[i]==A[i]&&B[i]==C[i]){

        }else if(A[i]==B[i]&&C[i]!=A[i]&&B[i]!=C[i]||A[i]!=B[i]&&C[i]!=A[i]&&B[i]==C[i]||A[i]!=B[i]&&C[i]==A[i]&&B[i]!=C[i]){
            ans++;
        }else{
            ans+=2;
        }
    }


    cout<<ans<<endl;



}