#include<iostream>
#include<cmath>

using namespace std;


int main(){
    int W,H,N;
    cin>>W>>H>>N;

    int xmin=0,xmax=W,ymin=0,ymax=H;


    for(int i=0;i<N;++i){
        int x,y,Q;
        cin>>x>>y>>Q;
        if(Q==1){
            if(xmin<x)
            xmin=x;

        }else if(Q==2){
            if(xmax>x)
            xmax=x;
        }else if(Q==3){
            if(ymin<y)
            ymin=y;
        }else{
            if(ymax>y)
            ymax=y;
        }


    }

    if(ymax-ymin<0||xmax-xmin<0){
        cout<<0<<endl;
    }else{
        cout<<(ymax-ymin)*(xmax-xmin)<<endl;
    }



}
