#include<iostream>
using namespace std;

int main(){
    int X=0;
    int Y=0;

    cin>>X;
    cin>>Y;
    int ans=abs(abs(X)-abs(Y));


    if(Y>X&&X>=0||Y>X&&0>=Y){
    }else if(X>Y&&Y>0||0>X&&X>Y){
        ans+=2;
    }else{
        ans+=1;
    }

    cout<<ans<<endl;

    return 0;
}