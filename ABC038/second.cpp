#include<iostream>
using namespace std;

int main(){
    int HA,WA,HS,WS;
    cin>>HA>>WA>>HS>>WS;
    if(HA==HS||HA==WS||WA==HS||WA==WS){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}