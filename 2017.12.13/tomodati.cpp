#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int main(){
    int N ,M;
    cin>>N>>M;
    vector<vector<int> > adj;
    adj.resize(N+1);

    rep(i,M){
        int a,b;
        cin>>a>>b;
        //aとbはお友達
        adj[a].push_back(b);
        //bとaはお友達
        adj[b].push_back(a);
    }

    set<int> s;
    //自分は1
    int v=1;

    for(int u:adj[v]){
        s.insert(u);
        for(int w: adj[u]){
            s.insert(w);
        }
    }

    cout<<s.size()-1<<endl;
    
}
