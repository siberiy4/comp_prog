#include<bits/stdc++.h>

using namespace std;

int main(){
    int A,B,C;

    cin>>A>>B>>C;


    long ans=B;


    if(C>B+A){
        ans+=B+A+1;
    }else {
        ans+=C;
    }


    cout<<ans<<endl;
}