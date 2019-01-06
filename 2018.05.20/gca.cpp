#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  N=0,A=0,B=0,C=0,K=0,ans=0;
    long long asum=0,bsum=0,csum=0;

    cin>>A>>B>>C>>K;

    if(K%2==1){
        ans=B-A;
    }else{
        ans=A-B;
    }

    cout<<ans<<endl;
  

}