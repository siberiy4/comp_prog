#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int X,A,B;

    cin>>X>>A>>B;

    if(A>=B){
    cout<<"delicious";
    }else if(B-A>X){
    cout<<"dangerous";
    }else{ 
        cout<<"safe";
    }

    cout<<endl;

    return 0;
}

