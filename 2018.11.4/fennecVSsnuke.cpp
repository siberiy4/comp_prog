#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    long N=0,A=0,B=0;

    cin>>N>>A>>B;

    long long Max=A+(B*(N-1));
    long long Min=(A*(N-1))+B;
    long long ans =Max-Min+1;

    if(A>B)ans=0;
    if(N<=1&&A!=B)ans=0;

    cout<<ans<<endl;

    return 0;
}


