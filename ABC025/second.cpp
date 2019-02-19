#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(){
    int N,A,B;

    cin>>N>>A>>B;


    int now=0;

    for(int i=0;i<N;++i){
        string nono;
        int run;
        cin>>nono>>run;

        if(run<A){
            run=A;
        }else if(run>B){
            run=B;
        }

        if(nono=="East"){
            now+=run;
        }else{
            now-=run;
        }
    }

    if(now==0){
        cout<<0<<endl;
        return 0;
    }else if(now<0){
        cout<<"West ";
    }else{
        cout<<"East ";
    }

    cout<<abs(now)<<endl;

}

