#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v={1,2,3,4};

    for(int &i: v){
    i*=2;
    cout << i << endl;
    }
}