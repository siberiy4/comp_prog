#include<iostream>

using namespace std;

int main(){
    long x,y,k;

    cin>>x>>y>>k;

    long ans=0;

    ans+=x;
    if(k<y){
        ans+=k;
    }else{
        ans+=2*y-k;
    }

    cout<<ans<<endl;
}