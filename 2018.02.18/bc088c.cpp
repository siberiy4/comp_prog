#include<bits/stdc++.h>
#define kokekoke int 
#define wannwann int 
using namespace std;


int main(){
    kokekoke N,a=0,b=0,c=0,tatea=0,tateb=0,tatec=0,count;
    int ansa=0,ansb=0,atate,btate,ctate;
    vector<wannwann> agyo;
    vector<wannwann> bgyo;
    vector<wannwann> cgyo;


    for(int i=0;i<3;i++){ 
        cin>>count;
        agyo.push_back(count);
    }
    for(int i=0;i<3;i++){ 
        cin>>count;
        bgyo.push_back(count);
    }
    for(int i=0;i<3;i++){ 
        cin>>count;
        cgyo.push_back(count);
    }

    a=agyo[0]-agyo[1];
    b=bgyo[0]-bgyo[1];
    c=cgyo[0]-cgyo[1];

    atate=agyo[1]-agyo[2];
    btate=bgyo[1]-bgyo[2];
    ctate=cgyo[1]-cgyo[2];

    if(atate==btate&&btate==ctate)ansa=1;
    if(a==b&&b==c)ansb=1;


    if(ansa==1&&ansb==1){
        cout<<"Yes"<<endl;
    }else{
    cout<<  "No"<<endl;
        
    }

}