#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main(int argc, char const *argv[])
{
    string S;
    cin>>S;
    const int n=6;
    vector<int> cnt(6);

    for(int i=0;i<S.size();++i){
        cnt[S[i]-'A']++;
    }

    for(int i = 0;i < n;i++) {
    cout << cnt[i] << " "; 
    }

cout<<endl;
    return 0;
}
