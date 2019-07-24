#include<bits/stdc++.h>

using namespace std;

int main(){
    long N,ans=0;
    string S;
    cin>>S;

    for (auto &x : S)
    {
        if(x=='o'){
            ans++;
        }
    }
    


if(ans+15-S.size()>=8){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}