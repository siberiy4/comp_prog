#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main(){
    int N ,M;
    cin>>N>>M;
    vector<vector<int> > G;
    
    G.resize(N);
    rep(i,N) G[i].resize(N);

    int INF=1e8;
    rep(i,N) rep(j,N)G[i][j]=INF;
    rep(i,N) G[i][i]=0;

    rep(k,N)rep(i,N) rep(j,N) G[i][j]=min(G[i][j],G[i][k]+G[k][j]);

    int ans=INF;

    rep(i,N){
        ans=min(ans,*max_element(G[i].begin(),G[i].end()));
        /*
        *max_elementは最大値のポインターを返す。要はMaxiを返す。
        */
    }
    cout<<ans<<endl;
}
