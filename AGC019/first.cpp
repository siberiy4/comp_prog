#include<iostream>

using namespace std;

int main(){
    long long q,h,s,d;

    cin>>q>>h>>s>>d;

    if(2*q<h){
        h=2*q;
    }
    if(2*h<s){
        s=2*h;
    }
    if(2*s<d){
        d=2*s;
    }

    long long N;
    cin>>N;

    long long ans=N/2*d+N%2*s;

    cout<<ans<<endl;


}
