#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,a,size,oddcount=0,evencount=0;
    string s,ans;

    cin>>s;

    ans="2018";

    for(int i=4;i<s.size();i++){
        ans=ans+s[i];
    }

    cout<<ans<<endl;



}