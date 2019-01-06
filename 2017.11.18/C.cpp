#include<bits/stdc++.h>
using namespace std;
int main(){
    int ABCD;
    int a,b,c,d;
    a=ABCD/1000;
    b=(ABCD/100)%10;
    c=(ABCD/10)%10;
    d=ABCD%10;

    if(a+b+c+d==7){
        cout<<a+b+c+d=7<<endl;
    }
    elseif(a+b+c-d==7){
        cout<<a+b+c-d<<endl;
    }   else if(a+b-c+d==7){
        cout<<a+b-c+d<<endl;
    }
    else if(a-b+c+d==7){
        cout<<a-b+c+d<<endl;
    }
        else if(a-b-c+d==7){
        cout<<a-b-c+d<<endl;
    }
    else if(a-b+c-d==7){
        cout<<a-b+c-d<<endl;
    }



}