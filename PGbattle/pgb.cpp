#include<bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[])
{

    string S;
    cin>>S;

    string ans;

    for(int i=0;i<S.size();++i){
        if('A'<=S[i]&&S[i]<='Z'){
            ans.push_back(S[i]);
        }
    }

    cout<<ans<<endl;

    return 0;
}
