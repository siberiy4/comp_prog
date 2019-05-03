#include<bits/stdc++.h>
using namespace std;

int main(){
    string code="CODEFESTIVAL2016";
    string inp;
    cin>>inp;
    int ans=0;

    for(int i=0;i<code.size();++i){
        if(code[i]!=inp[i])ans++;
    }
    cout<<ans<<endl;
}