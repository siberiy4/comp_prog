#include<iostream>
#include<vector>

using namespace std;

void syokkyo(*vector<vector<char>> mudamasu){

}

 int main(int argc, char const *argv[])
{
    int H,W;
    cin>>H>>W;

    vector<vector<char>> mudamasu(H,vector<char>(W));

    for(int i=0;i<H;i++){
        for(int k=0;k<W;++k){
            cin>>mudamasu[i][k];
        }
    }    

    


    return 0;
}
