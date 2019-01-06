#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,ans;
    cin>>a>>b;

    c=a+b;
    if(c%2==0){
        ans=c/2;
    }
    else{
        ans=c/2+1;
    }
    cout<<ans<<endl;
}
