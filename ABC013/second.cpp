#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    int N,tar;
    cin>>N>>tar;

    int ov=10+tar;

    int ans=min(abs(ov-N),abs(tar-N));

    ov=-10+tar;

    ans=min(abs(ov-N),ans);



    cout<<ans<<endl;



    return 0;
}
