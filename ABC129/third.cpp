#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N,ans=1,M;
    string S;
    cin>>N;
    cin>>M;

    deque<long long> v(M);

    bool check=true;


    for (long i = 0; i <M; i++)
    {
        cin>>v[i];
        if(i!=0&&(v[i-1]==(v[i]-1))){
            cout<<0<<endl;
            return 0;
        }
    }

    long long tmp=0;


for (long i = 1; i < v.size(); i++)
{
    
    for (long k = 1; k <=v[i]-v[i-1]; k++)
    {
        ans*=k;
    ans%=1000000007; 
        
    }

    cout<<ans<<endl;
}



    cout<<ans<<endl;
}