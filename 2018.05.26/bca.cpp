#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,A=0,B=0;
    int ans=0;

    long ka,gen,zyou,Nmax;

    cin>>A>>B;

    ka=A+B;
    gen=A-B;
    zyou=A*B;

    Nmax=ka;
    Nmax=max(Nmax,gen);
    Nmax=max(Nmax,zyou);
    
    cout<<Nmax<<endl;

}