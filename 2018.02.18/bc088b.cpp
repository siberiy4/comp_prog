#include<bits/stdc++.h>
#define kokekoke int 
#define wannwann int 
using namespace std;


int main(){
    kokekoke N,a=0,b=0,c=0,tatea=0,tateb=0,tatec=0,count;
    int ansa=0,ansb=0;
    vector<wannwann> agyo;
    vector<wannwann> bgyo;
    vector<wannwann> cgyo;


    for(int i=0;i<3;i++){ 
        cin>>count;
        agyo.push_back(count);
        if(i==1){ a=a+count;}
        else{ a=a-count;}
    }
    for(int i=0;i<3;i++){ 
        cin>>count;
        bgyo.push_back(count);
        if(i==1)b=b+count;
        else{
            b=b-count;
        }
    }
    for(int i=0;i<3;i++){ 
        cin>>count;
        cgyo.push_back(count);
        if(i==1)c=c+count;
        else{
            c=c-count;
        }
    }

    tatea=agyo[0]-bgyo[0]+cgyo[0];
    tateb=agyo[1]-bgyo[1]+cgyo[1];
    tatec=agyo[2]-bgyo[2]+cgyo[2];

    if(tatea<=0&&tateb<=0&&tatec<=0)ansa=1;
    if(tatea>0&&tateb>0&&tatec>0)ansa=1;
    if(a>0&&b>0&&c>0)ansb=1;
    if(a<=0&&b<=0&&c<=0)ansb=1;


    if(ansa==ansb){
        cout<<"Yes"<<endl;
    }else{
    cout<<  "No"<<endl;
        
    }

}