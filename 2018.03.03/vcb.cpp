#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  a=0,b=0,x=0;
    long long ans=0;

    cin>>a;
    cin>>b; 
    cin>>x;

    ans=(b/x)-(a/x);
    
    if(a%x==0)ans++;

    cout<<ans<<endl;

}