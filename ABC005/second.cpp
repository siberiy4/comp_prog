#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;

    vector<int> tako(N);

    for(auto &x:tako)cin>>x;

    sort(tako.begin(),tako.end());

    cout<<*tako.begin()<<endl;

    return 0;
}
