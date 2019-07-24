#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N,ans=0;
    string S;
    cin>>N;

    vector<long long> v(N);
    vector<long long> sum(N);

    for (long  i = 0; i < N; i++)
    {
        cin>>v[i];
        if(i!=0){
            sum[i]=sum[i-1]+v[i];
        }else{
            sum[i]=v[i];
        }
    }

    long sa=1e9;

    for (long i = 0; i < N-1; i++)
    {
        if(abs(sum[i]-(sum[N-1]-sum[i]))<sa){
            sa=abs(sum[i]-(sum[N-1]-sum[i]));
        }
    }
    
cout<<sa<<endl;
        

}