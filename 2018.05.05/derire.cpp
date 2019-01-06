#include<bits/stdc++.h>
using namespace std;

int main(){
    int N=0,m=0,zen=0,zenzen=0,ima=0;
    cin>>N;
    vector<int> vertex(N);

    cin>>m;
    vector<vector<int>> side(m);

    for(int i=0;i<m;i++){
        cin>>zen;
        side[i].push_back(zen);

        cin>>zen;
        side[i].push_back(zen);
        
        sort(side[i].begin(),side[i].end());
    }
    
    sort(side.begin(),side.end());
    

    for(int i=0;i<N;i++){
        if(side[i]==1){
            ima++;
        }
    }
    cout<<ima<<endl;

}

