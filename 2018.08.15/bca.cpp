#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;


int main(){
    int N;

    cin>>N;
    vector<int> vec(N);

    for(auto &&x:vec){
        cin>>x;
    }

    sort(vec.begin(),vec.end());

    cout<<vec.at(N-1)-vec.at(0)<<endl;
}