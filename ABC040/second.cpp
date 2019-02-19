#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int N;
    cin>>N;
    int ans=1e9;

    for(int i=1;i<=N;++i){
        ans = min(ans,(N-i*(N/i))+abs(i-(N/i)));
    }
    


    cout<<ans<<endl;

}