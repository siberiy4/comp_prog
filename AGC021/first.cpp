#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    long long N;
    cin>>N;
    N++;

    string S=to_string(N);

    char t=S[0];
    long ans=9*(S.size()-1)+(S[0]-'0')-1;


    cout<<ans<<endl;
}