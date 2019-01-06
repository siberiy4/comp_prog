#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,X,a,b,c,d,e;
    int min=0,kari;
    int ans;
    long long sum=0;
    


    cin>>N;
    cin>>X;
    vector<int> okasi(N);

    for(auto&x : okasi){
        cin>>x;
        sum+=x;
    }

    ans=N;
    kari=X-sum;

    sort(okasi.begin(),okasi.end());

    ans=ans+(kari/okasi[0]);

    cout<<ans<<endl;


}