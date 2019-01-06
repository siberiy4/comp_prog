#include<iostream>
#include<vector>


using namespace std;


int main(int argc, char const *argv[])
{
    vector<vector<char>> othello(4,vector<char>(4));

    for(int i=3;i>=0;--i){
        for(int k=3;k>=0;--k){
            cin>>othello[i][k];
        }
    }

    for(int i=0;i<4;++i){
        for(int k=0;k<4;++k){
            cout<<othello[i][k]<<" ";
        }

        cout<<endl;
    }


    return 0;
}
