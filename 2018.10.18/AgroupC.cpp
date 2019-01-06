#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<long> vec(N*3);

    for(auto &x:vec){
        cin>>x;
    }
    long ans=0;

    sort(vec.begin(),vec.end());    
/*
    for(int i=0;i<3*N;i++){
        cout<<vec[i]<<" ";
    }
*/
    for(int i=3*N-2;i>N-1;i-=2){
        ans+=vec[i];
    }

    cout<<ans<<endl;

}