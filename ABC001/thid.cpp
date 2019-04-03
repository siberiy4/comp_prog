#include<iostream>

using namespace std;


int main(){
    long long e,i;
    cin>>e>>i;
    string D;
    long L=0;

    if(e<=112){
        D="N";
    }else if(e<=337){
        D="NNE";
    }else if(e<=562){
        D="NE";
    }else if (e<=787)
    {
        D="ENE";
    }else if (e<=1012)
    {
        D="E";
    }else if (e<=1237)
    {
        D="ESE";
    }else if (e<=1462)
    {
        D="SE";
    }else if (e<=1687)
    {
        D="SSE";
    }else if (e<=1912)
    {
        D="S";
    }else if (e<=2137)
    {
        D="SSW";
    }else if (e<=2362)
    {
        D="SW";
    }else if (e<=2587)
    {
        D="WSW";
    }else if (e<=2812)
    {
        D="W";
    }else if (e<=3037)
    {
        D="WNW";
    }else if (e<=3262)
    {
        D="NW";
    }else if (e<=3487)
    {
        D="NNW";
    }else
    {
        D="N";
    }
    
    
    if(i<0.25*60){
        L=0;
    }else if (i<1.55*60)    
    {
        L=1;
    }else if (i<3.35*60)
    {
        L=2;
    }else if (i<5.45*60)
    {
        L=3;
    }else if (i<60*7.95)
    {
        L=4;
    }else if (i<(60*10.75))
    {
        L=5;
    }else if (i<(60*13.85))
    {
        L=6;
    }else if (i<60*17.15)
    {
        L=7;
    }else if (i<60*20.75)
    {
        L=8;
    }else if (i<60*24.45)
    {
        L=9;
    }else if (i<60*28.45)
    {
        L=10;
    }else if (i<60*32.65)
    {
        L=11;
    }else
    {
        L=12;
    }
    
    if(L==0){
        cout<<"C"<<" "<<0<<endl;
    }else
    {
        cout<<D<<" "<<L<<endl;
    }


}