#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<string> str(N);
    for(auto &x:str){
        cin>>x;
    }

    for(int i=0;i<N;++i){
        for(int k=N-1;k>=0;--k){
            cout<<str[k][i];
        }
        cout<<endl;
    }

}