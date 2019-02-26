#include<iostream>
using namespace std;

int main(){
    long long N;
    cin>>N;
    long long sum=0;
    long i=0;
    
    while(sum<N){
        i++;
        sum+=i;
    }
    cout<<i<<endl;
}