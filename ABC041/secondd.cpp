#include<iostream>

using namespace std;

int main(){
    long long  A,B,C;
    cin>>A>>B>>C;

    long long ans =A%1000000007*B%1000000007*C%1000000007;



    cout<<ans<<endl;
}