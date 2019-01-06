#include<bits/stdc++.h>
using namespace std;
int main(){

    int A=0,B=0,C=0,D=0;
    int sum=0;
    cin>>A>>B>>C>>D;

    if(A>B){
        sum=B;
    }else{
        sum=A;
    }

    if(C>D){
        sum=sum+D;
    }else{
        sum=sum+C;
    }

    cout<<sum<<endl;

}