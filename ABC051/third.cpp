#include<iostream>

using namespace std;


int main(){
    int sx,sy,tx,ty;
    cin>>sx>>sy>>tx>>ty;

    string ans="";

    for(int i=0;i<abs(ty-sy);++i){
        ans+='U';
    }

    for(int i=0;i<abs(tx-sx);++i){
        ans+='R';
    }

    for(int i=0;i<abs(ty-sy);++i){
        ans+='D';
    }

    for(int i=0;i<abs(tx-sx);++i){
        ans+='L';
    }

    ans+="L";

    for(int i=0;i<abs(ty-sy)+1;++i){
        ans+='U';
    }


    for(int i=0;i<abs(tx-sx)+1;++i){
        ans+='R';
    }

    ans+="DR";

    for(int i=0;i<abs(ty-sy)+1;++i){
        ans+='D';
    }

    for(int i=0;i<abs(tx-sx)+1;++i){
        ans+='L';
    }

    ans+='U';

    cout<<ans<<endl;

}
