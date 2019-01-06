#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,X,c,a=0,i=0;
    vector<int> b(10,0);
    cin >>N;
    X=N;
    for(int i=0;i<10;i++){
        b[i]=N%10;
        N=N/10;
    }

    for(int k=0;k<10;k++){
        a=a+b[k];
    }


    if(X%a==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}