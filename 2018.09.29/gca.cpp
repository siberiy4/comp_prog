#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    string S,T;

    cin>>N>>M;
    cin>>S>>T;

    int tmp = __gcd(M,N);


    long long ans=(long long)N*(long long)M/(long long)tmp;

    int i=0;
    int k=0;


    for( long i=0;i<tmp;i++){
        if(S[i*N/tmp]!=S[i*M/tmp]){
            puts("-1");
return 0;

        }
    }


    cout<<ans<<endl;
}