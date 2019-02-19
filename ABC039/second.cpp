#include<iostream>
using namespace std;

int main(){
    long X;
    cin>>X;
    long i=1;
    for(;i*i*i*i!=X;++i){}
    
    cout<<i<<endl;

}