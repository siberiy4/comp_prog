#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int A,B,C;

    cin>>A>>B>>C;

    if(A+B!=C&&A-B!=C){
        cout<<'!'<<endl;
        return 0;
    }

    if(B==0){
        cout<<"?"<<endl;
        return 0;
    }

    if(A+B==C){
        cout<<'+'<<endl;
    }else{
        cout<<"-"<<endl;
    }



    return 0;
}
