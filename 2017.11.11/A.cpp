#include<bits/stdc++.h>


using namespace std;

int main(){

    int a,b;
    string X,Y;

    cin >>X >>Y;
    // a=(int)(X-'0');
    // b=(int)(Y-'0');

if(X=="A"){a=10;}
if(X=="B"){a=11;}
if(X=="C"){a=12;}
if(X=="E"){a=14;}
if(X=="D"){a=13;}
if(X=="F"){a=15;}
if(Y=="A"){b=10;}
if(Y=="B"){b=11;}
if(Y=="C"){b=12;}
if(Y=="D"){b=13;}
if(Y=="E"){b=14;}
if(Y=="F"){b=15;}

    if(a<b){cout<<"<"<<endl;}
    if(a==b){cout<<"="<<endl;}    
    if(a>b){cout<<">"<<endl;}
}