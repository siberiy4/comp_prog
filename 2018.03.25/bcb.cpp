#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0;
    int D=0;
    long long ans=0;
    int X=0;
    int tmp=0;

    vector<int> A(105);

    cin>>N>>D>>X;

    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    for(int i=0;i<N;i++){
        tmp=A[i];
        ans++;
        A[i]++;
        while(A[i]<=D){
            A[i]=A[i]+tmp;
            ans++;
        }
    }


    cout<<ans+X<<endl;



}