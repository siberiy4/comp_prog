#include<bits/stdc++.h>
using namespace std;
int main(){
    int X,A,B,C;
    int Bkae,Cakae,Cbkae;
    int ans=1,kari,Acount=0,Bcount=0,Ccount=0;

    cin>>A>>B>>C>>X;
    kari=X;
    while(kari-500>=0){
        kari=kari-500;
        Acount++;
        if(Acount==A)break;
    }

    while(kari-100>=0){
        kari=kari-100;
        Bcount++;
        if(Bcount==B)break;
    }

    while(kari-50>=0){
        kari=kari-50;
        Ccount++;
        if(Ccount==C)break;
    }
    if(kari!=0)nas=0



    Bkae=(B-Bcount)/5;
    Cakae=(C-Ccount)/10;
    Cbkae=(C-Ccount)/2;

    if(ans!=0){
        ans=ans+Bkae;
    }

    if((X/50)%2==1&&C==0||)ans=0;

    cout<<ans<<endl;
}