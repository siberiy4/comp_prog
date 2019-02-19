#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int W,H;
    cin>>H>>W;
    vector<string> vec(H);
    for(int i=0;i<H;++i){
        cin>>vec[i];
    }

    for(auto &x:vec){
        cout<<x<<endl;
        cout<<x<<endl;
    }

}

