#include<iostream>


using namespace std;


int main(){
    string S;
    char X;
    cin>>X>>S;
    for (auto &x : S)
    {
        if(x!=X){
            cout<<x;
        }
    }
    
    cout<<endl;
}