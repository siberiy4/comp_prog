#include<bits/stdc++.h>
using namespace std;

int main(){
    int N=0,K=0;
    cin>>N;
    int tmp;

    string ans="";


    while(N!=0){
        if(N%2!=0){
            N--;
            ans="1"+ans;

        }else ans="0"+ans;

        N/=-2;

    }
    if (ans == "") ans = "0";


    cout<<ans<<endl;

}