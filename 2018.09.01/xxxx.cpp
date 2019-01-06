#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,X;
    cin>>N>>X;
    vector<int> zahyo(N);
    long min=999999999999;

    for(auto &&x:zahyo){
        cin>>x;    

    }

    int ans=abs(zahyo[0]-X);



    for(int i=1;i<N;i++){
        ans=__gcd(ans,abs(zahyo[i]-X));
    }


cout<<ans<<endl;





}