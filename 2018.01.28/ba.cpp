#include<bits/stdc++.h>
using namespace std;
int main(){
    int X,A,B;
    int ans;

    cin>>X>>A>>B;
    
    ans=X-A;

    while(ans-B>=0){
        ans=ans-B;
    }
    cout<<ans<<endl;
}