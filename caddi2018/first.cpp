#include<bits/stdc++.h>

using namespace std;

int main(){
    string N;
    cin>>N;


    int ans=0;

    for(int i=0;i<4;i++){
        if(N[i]=='2'){
            ans++;
        }
    }
    cout<<ans<<endl;
}