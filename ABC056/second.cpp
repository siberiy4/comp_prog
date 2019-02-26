#include<iostream>

using namespace std;

int main(){
    int W,A,B;
    cin>>W>>A>>B;

    if(B+W<A){
        cout<<A-(B+W)<<endl;
    }else if(B<=A+W){
        cout<<0<<endl;
    }else{
        cout<<B-(A+W)<<endl;
    }
}