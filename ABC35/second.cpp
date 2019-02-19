#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int N;string S;
    cin>>S>>N;

    long X=0;
    long Y=0;
    long dainm=0;

    for(int i=0;i<S.size();++i){
        if(S[i]=='L'){
            X--;
        }else if(S[i]=='R'){
            X++;
        }else if(S[i]=='U'){
            Y++;
        }else if(S[i]=='D'){
            Y--;
        }else {
            dainm++;
        }
    }

    long sum=abs(X)+abs(Y);

    if(N==1){
        sum+=dainm;
    }else{

        sum-=dainm;

        if(sum<0){
            sum=abs(sum%2);
        }

    }

    cout<<sum<<endl;


}