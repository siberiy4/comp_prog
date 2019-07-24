#include<iostream>

using namespace std;

int main(){
    int N,X;
    int ans=1,sum=0;

    cin>>N>>X;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin>>tmp;
        sum+=tmp;
        if(sum<=X)ans++;
    }
    

    cout<<ans<<endl;
}