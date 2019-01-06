#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int M,D;
    cin>>M>>D;
    if(M%D==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
