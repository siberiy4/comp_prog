#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;

    cin>>S;

    string n="";
    n+=S[0];
    n+=S[1];
    n+=S[2];
    n+=S[3];
    string g="";
    g+=S[5];
    g+=S[6];
    string h="";
    h+=S[8];
    h+=S[9];
    long nen=stoi(n);
    long getu=stoi(g);
    long hi=stoi(h);

    //cout<<nen<<" "<<getu<<" "<<hi<<endl;

    if(nen>2019){
        cout<<"TBD"<<endl;
    }else if(nen==2019&&getu>4){
        cout<<"TBD"<<endl;
    }else{
        cout<<"Heisei"<<endl;
    }

}