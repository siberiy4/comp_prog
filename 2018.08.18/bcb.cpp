#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a=0;

    cin>>a;


    for(long long i=0;i<5000000000000000;i++){
        a*=a;
    }
    cout<<a<<endl;
}