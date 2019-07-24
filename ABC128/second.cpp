#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>

using namespace std;


int main(){
    int N;
    cin>>N;
    vector<tuple<string,int,int>> vec;

    for (int i = 0; i < N; i++)
    {
        string A;
        int B,C=i+1;
        cin>>A>>B;
        vec.push_back(make_tuple(A,-B,C));
    }
    

    sort(vec.begin(),vec.end());

    for (auto &x : vec)
    {
        cout<<get<2>(x)<<endl;
    }
    
    
}