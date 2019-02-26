#include<iostream>

using namespace std;

int main(){
    long long N;
    cin>>N;

    for(long long i=1;;++i){
        if(i*i>N){
            cout<<(i-1)*(i-1)<<endl;
            return 0;
        }
    }
}