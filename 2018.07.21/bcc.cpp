#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0, M=0,ans=0;

    int max=0,min=0,pre;

    cin>>N>>M;

    vector<pair<int,int>> vec(M);
    for(int i=0;i<M;i++){
        cin>>vec[i].second>>vec[i].first;
    }
    sort(vec.begin(),vec.end());

    
    pre=vec[0].first;
    ans++;
    for(int k=0;k<M;k++){
        if(pre<=vec[k].second){
            ans++;
            pre=vec[k].first;
        }
    }


    cout<<ans<<endl;
}