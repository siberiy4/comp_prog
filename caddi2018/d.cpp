#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    long ans=0;

    cin>>N;
    vector<long> tt(N);

    for(auto &x:tt){
        cin>>x;
        ans+=(x%2);
    }

    if(ans==0){
        cout<<"second"<<endl;
    }else{
        cout<<"first"<<endl;
    }
}