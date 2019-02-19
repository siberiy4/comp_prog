#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> pur(N);
    for(auto &x:pur){
        cin>>x;
    }

    int minm=*min_element(pur.begin(),pur.end());

    int ans=pur[0];


    for(int i=1;i<N;++i){
        if(pur[i-1]>pur[i]){

        }else{
            ans+=(pur[i]-minm)-(pur[i-1]-minm);
        }
    }




    cout<<ans<<endl;

}