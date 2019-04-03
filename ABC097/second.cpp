#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int X;
    cin>>X;

    if(X==1){
        cout<<1<<endl;
        return 0;
    }

    int ans=0;
    for(int i=2;i<=X;++i){
        for(int k=2;pow(i,k)<=X;++k){
            ans=max(ans,int(pow(i,k)));
        }
    }
    cout<<ans<<endl;
}