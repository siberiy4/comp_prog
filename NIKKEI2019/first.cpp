#include<bits/stdc++.h>

using namespace std;


int main(){
    long N,A,B;
    string str;

    cin>>N>>A>>B;


    long mm=A+B-N;

    if(mm<0)mm =0;

    cout<<min(A,B)<<" "<< mm <<endl;

}