#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main(){
    int N =4;
    vector<vector<int> > adj;

    //隣接リスト
    adj.resize(N);
    
    adj[0].push_back(1);
    adj[0].push_back(2);

    adj[1].push_back(0);
    adj[1].push_back(2);

    adj[2].push_back(0);
    adj[2].push_back(1);
    adj[2].push_back(3);
    
    adj[3].push_back(2);
    

    //隣接行列
    vector<vector<int> > G;
    G.resize(N);
    G[0].resize(N);
    G[0][0]=0;
    G[0][1]=1;
    G[0][2]=1;
    G[0][3]=0;

    G[1].resize(N);
    G[1][0]=1;
    G[1][1]=0;
    G[1][2]=1;
    G[1][3]=0;
    
    G[2].resize(N);
    G[2][0]=1;
    G[2][1]=1;
    G[2][2]=0;
    G[2][3]=1;

    G[3].resize(N);
    G[3][0]=0;
    G[3][1]=0;
    G[3][2]=1;
    G[3][3]=0;

    int x=2;
    cout<<"頂点"<<x<<"に隣接している頂点"<<endl;
    for(int v:adj[x]){
        cout <<v<<endl;
    }
}
