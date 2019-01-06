#include<bits/stdc++.h>
using namespace std;
int main(){
    int Di=0,De=0,ans=0,kansyo=0,ahaha,kari=0,kiki=0;
    double Dis=0.0;
    vector<string> D={"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "N"};

    vector<int> huryou={2*10+1, 15*10+1, 33*10+1, 54*10+1, 79*10+1, 107*10+1,138*10+1, 171*10+1, 207*10+1, 244*10+1, 284*10+1, 326*10+1,  100000};


    cin >>De>>Di;

/*
    for(int kaisu=0;kaisu<huryou.size()-1;kaisu){
        if(Di*10<=huryou[kaisu]){
            ans=kaisu;
            break;
        }

    }


    Dis=(double)Di/60;
    kari = (int)(Dis*100)%10;
    kiki=(int)(double)(Di/60)*10;
    Dis=kiki;
    if(kari>= 5) {
        Dis=kiki+1;
    }
*/

    if(Di*10 <=(2*10+1)*6)ans=0;
    else if(Di*10 <=(15+0.1)*6)ans = 1;
    else if(Di*10 <=(33*10+1)*6)ans = 2;
    else if(Di*10 <=(54*10+1)*6)ans = 3;
    else if(Di*10 <=(79*10+1)*6)ans = 4;
    else if(Di*10 <=(107*10+1)*6)ans = 5;
    else if(Di*10 <=(138*10+1)*6)ans = 6;
    else if(Di*10 <=(171*10+1)*6)ans = 7;
    else if(Di*10 <=(207*10+1)*6)ans = 8;
    else if(Di*10 <=(244*10+1)*6)ans = 9;
    else if(Di*10 <=(284*10+1)*6)ans = 10;
    else if(Di*10 <=(326*10+1)*6)ans = 11;
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