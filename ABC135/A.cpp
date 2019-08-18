#include<iostream>
#include<limits>
using namespace std;

int main(){
    long A,B;

    cin>>A>>B;

    for (int i = numeric_limits<int>::min() ; i <= numeric_limits<int>::max() ; i++)
    {
        if(abs(A-i)==abs(B-i)){
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<"IMPOSSIBL"<<endl;
    
}