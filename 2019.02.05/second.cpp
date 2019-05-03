#include<iostream>

using namespace std;

int main(){
    long T,A,B,C,D;
    cin>>T>>A>>B>>C>>D;

    if(T>=A+C){
        cout<<B+D<<endl;
    }else if(T>=C){
        cout<<D<<endl;
    }else if(T>=A){
        cout<<B<<endl;
    }else{
        cout<<0<<endl;
    }
}