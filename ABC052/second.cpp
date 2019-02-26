#include<iostream>

using namespace std;


int main(){
    int N;
    string S;
    cin>>N>>S;

    int X=0;

    int ans=0;

    for(int i=0;i<N;++i){
        int tmp;
        if(S[i]=='I'){
            tmp=1;
        }else{
            tmp=-1;
        }

        X+=tmp;

        ans=max(ans,X);
    }

    cout<<ans<<endl;
}