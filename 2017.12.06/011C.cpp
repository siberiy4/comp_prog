#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,NG1,NG2,NG3,bo=0,i;

    cin>>N>>NG1>>NG2>>NG3;


    if(N==NG1||N==NG2||N==NG3){
        N=0;
        bo=1;
    }

    while(N>3&&i<100){
        i++;
        if(N-3==NG1||N-3==NG2||N-3==NG3){
            if(N-2==NG1||N-2==NG2||N-2==NG3){
                if(N-1==NG1||N-1==NG2||N-1==NG3){
                bo=1;
                break;
                }
                else{
                    N=N-1;
                }
            }
            else{
                N=N-2;
            }
        }
        else{
            N=N-3;
        }
    }
    if(bo==0&&i<100){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}