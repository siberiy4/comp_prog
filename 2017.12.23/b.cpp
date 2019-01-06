#include<bits/stdc++.h>
using namespace std;
int main(){
    int A, B,N,keisan,isum=0,sum=0;

    cin >>N >>A >>B;

    for(int i=0;i<=N;i++){
        keisan=i;
        for(int k=0;k<5;k++){
            isum=isum+keisan%10;
            keisan=keisan/10;
            if(keisan==0)break;
        }
        if(isum>=A&&isum<=B){
            sum=sum+i;
        }
        isum=0;
    }

    cout<<sum<<endl;
}