#include<bits/stdc++.h>

using namespace std;


int main(){
    long long A,B,C;
    long long ans=0;
    string S;
    double Q;

    cin>>A>>B>>C;

    if(B/A>C)ans=C;
    else ans=B/A;



    cout<<ans<<endl;
}