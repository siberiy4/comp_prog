#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    long H,W;
    cin>>N;
    cin>>H>>W;

    vector<long> A(N),B(N);
    long ans=0;

    for(long i=0;i<N;i++){
        cin>>A[i]>>B[i];
        if(A[i]>=H&&B[i]>=W){
            ans++;
        }
    }

    cout<<ans<<endl;
}