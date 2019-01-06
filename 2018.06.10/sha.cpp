#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=0;
    cin>>a>>b;

    if(a+b==15){
        cout<<"+"<<endl;
    }else if(a*b==15){
        cout<<"*"<<endl;
    }else{
        cout<<"x"<<endl;
    }
}