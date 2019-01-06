#include<bits/stdc++.h>
using namespace std;

int main(){
    int N=0,K=0;
    cin>>N;

    int C=4,D=7;

    int Ctmp=4,Dtmp=7;
    int tmp=0;

    for(Ctmp=4;Ctmp<=N;Ctmp+=C){
        for(Dtmp=0;Dtmp+Ctmp<=N;Dtmp+=D){
            if(Dtmp+Ctmp==N){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }

    for(Dtmp=7;Dtmp<=N;Dtmp+=D){
        for(Ctmp=0;Dtmp+Ctmp<=N;Ctmp+=C){
            if(Dtmp+Ctmp==N){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }




    cout<<"No"<<endl;

}