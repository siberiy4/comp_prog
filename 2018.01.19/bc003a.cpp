#include<bits/stdc++.h>

using namespace std;

int main(){
    double ans=0, keisan=1;
    int N;

    cin>>N;

    for(int i=1;i<=N;i++){
        keisan=10000*i;

        keisan=keisan/N;

        ans=ans+keisan;
    }

    cout<<ans<<endl;

}