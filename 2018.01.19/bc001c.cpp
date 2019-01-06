#include<bits/stdc++.h>

using namespace std;

int main(){
    int Di=0,De=0,ans=0,kansyo=0,ahaha,kari=0,kiki=0;
    double Dis=0.0;
    vector<string> D={"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "N"};
    string  hougaku;

    cin >>De>>Di;



    Dis=(double)Di/60;
    kari = (int)(Dis*100)%10;
    kiki=(int)(double)(Di/60)*10;
    Dis=kiki;
    if(kari>= 5) {
        Dis=kiki+1;
        //Dis=(double)Di/10;
    }


    if(Di <=2*6)ans=0;
    else if(Di <=15*6)ans = 1;
    else if(Di <=33*6)ans = 2;
    else if(Di <=54*6)ans = 3;
    else if(Di <=79*6)ans = 4;
    else if(Di <=107*6)ans = 5;
    else if(Di <=138*6)ans = 6;
    else if(Di <=171*6)ans = 7;
    else if(Di <=207*6)ans = 8;
    else if(Di <=244*6)ans = 9;
    else if(Di <=284*6)ans = 10;
    else if(Di <=326*6)ans = 11;
    else ans = 12;



/*
    if(Dis <=0.2) ans=0;
    else if(Dis <=1.5)ans = 1;
    else if(Dis <=3.3)ans = 2;
    else if(Dis <=5.4)ans = 3;
    else if(Dis <=7.9)ans = 4;
    else if(Dis <=10.7)ans = 5;
    else if(Dis <=13.8)ans = 6;
    else if(Dis <=17.1)ans = 7;
    else if(Dis <=20.7)ans = 8;
    else if(Dis <=24.4)ans = 9;
    else if(Dis <=28.4)ans = 10;
    else if(Dis <=32.6)ans = 11;
    else ans = 12;
  */  
    
    int i=0;

    ahaha= De*10;

    i=((De*10+1125)/2250)%16;

   // cout<<i<<endl;

    kansyo= ahaha/225;
    //if(i==0)i++;

    //cout <<kansyo<< <<endl;

    if(ans==0){cout << "C" <<" "<< ans<<endl;}
    else{cout<< D[i] <<" "<< ans<<endl;}



    return 0;
    
    


}