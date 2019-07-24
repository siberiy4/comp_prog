#include<bits/stdc++.h>


using namespace std;

int main(){
    long long N,A,B,C,D;
    long long ans=0;

    string S;

    cin>>N>>A;

    vector<long long> v(N);

    for(int i=0;i<N;++i){
        v[i]=A+i;
    if(i==0){
        B=v[i];
    }else if(abs(B)>abs(v[i])){
        B=v[i];
    }
    
    }


    cout<<accumulate(v.begin(),v.end(),0)-B<<endl;


}