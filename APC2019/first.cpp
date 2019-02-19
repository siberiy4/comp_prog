#include<bits/stdc++.h>

using namespace std;
int main(){
    long long N;
    cin>>N;

    int H,W;
    cin>>H>>W;



    long long ans=0;

    ans=(N-H+1)*(N-W+1);

    cout<<ans<<endl;
}