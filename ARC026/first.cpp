#include<iostream>

using namespace std;

int main(){
    int N,A,B;

    cin>>N>>A>>B;

    if(N<=5){
        cout<<N*B<<endl;
    }else{
        cout<<5*B+(N-5)*A<<endl;
    }
}