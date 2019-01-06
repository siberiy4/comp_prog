#include<iostream>

using namespace std;

int main(){
    int a,b,c,d,N;

    cin>>N;
    a=N/1000;
    b=(N/100)%10;
    c=(N/10)%10;
    d=N%10;

    if(a==b&&b==c||b==c&&c==d){
        cout<<"Yes"<<endl;
    }

    else{
        cout<<"No"<<endl;
    }
}