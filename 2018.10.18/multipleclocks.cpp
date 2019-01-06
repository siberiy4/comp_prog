#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;

    long long ans,input;
    cin>>ans;

    for(int i=1;i<N;++i){
        cin>>input;
        input/=__gcd(ans,input);
        ans=ans*input;
    }

    cout<<ans<<endl;

}
