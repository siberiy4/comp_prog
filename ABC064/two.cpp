#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> vec(N);
    for(auto &x:vec){
        cin>>x;
    }
    cout<<*max_element(vec.begin(),vec.end())-*min_element(vec.begin(),vec.end())<<endl;
}