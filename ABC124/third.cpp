#include<bits/stdc++.h>

using namespace std;

int main(){
    long long A=0,B=0,C=0,D=0,N=0,ans=0;
    string S;



    cin>>S;
    vector<long long> vec(N);

    for(long i=0;i<S.size();++i){
        if(i%2==0){
            if(S[i]=='0'){
                B++;
            }else{
                A++;
            }
        }else{
            if(S[i]=='0'){
                A++;
            }else{
                B++;
            }
        }
    }


    cout<<min(A,B)<<endl;

}