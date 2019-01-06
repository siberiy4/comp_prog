#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,sum=0,i=0,j=0;
    long long N,copy=0,tmp=0;

    cin>>N;
    copy=N;


   while(copy>0){ 
        copy=copy/10;
        i++;
    }
    if(i==0){
        i=1;
    }
    j=i;
cout<<i <<endl;
i--;
     while(i>0){
        tmp=N/pow(10,i);
        cout<<i;
        if(tmp<9&&i==1){
            sum=sum +8;
            break;
        }

        if(tmp<9&&i!=1){
            sum=sum+tmp-1;
            if(sum<0)sum=0;
            break;
        }

        sum=sum+tmp;
        i--;
    }

    while(i>1){
        i--;
        sum=sum+9;
    }


    cout<<endl;                                                                                       

    cout <<sum<<endl;

}