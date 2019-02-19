#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    const int N=12;
    vector<string> findr(N);
    for(auto &x:findr){
        cin>>x;
    }
    int ans=0;
    for(int i=0;i<N;++i){
        if(findr[i].find('r')!=string::npos)ans++;
    }

    cout<<ans<<endl;
}
