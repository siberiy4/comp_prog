#include<bits/stdc++.h>
using namespace std;
int main(){
    long long N=0;
    long long zahyo[100005];
    long long kingaku[100005];
    long long print=0;
    long long tmp=0;
    long long  sum=0,ans=0;
    cin>>N;

    zahyo[0]=0;
    zahyo[N+1]=0;

    for(int i=1;i<=N;i++){
        cin>>zahyo[i];
        kingaku[i]=abs(zahyo[i]-zahyo[i-1]);
        ans+=kingaku[i];
    }
        kingaku[N+1]=abs(zahyo[N]);
        ans+=kingaku[N+1];
    

    for(int i=1;i<=N;i++){
        print=ans-kingaku[i]-kingaku[i+1]+abs(zahyo[i+1]-zahyo[i-1]);


        cout<<print<<endl;
    }

}