#include<iostream>
#include<numeric>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> v(N);
    for(auto &x:v){
        cin>>x;
    }

    long sum=accumulate(v.begin(),v.end(),0);
    long ma=*max_element(v.begin(),v.end());

    if(sum-ma>ma){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


}