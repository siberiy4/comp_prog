#include<iostream>

using namespace std;

int main(){
    long N,sum=0;
    cin>>N;
    for (int i = 0; i <= N; i++)
    {
        sum+=i;
    }

if(N==1){
    cout<<"BOWWOW"<<endl;
    return 0;
}
    for (int i = 2; i*i<=sum; i++)
    {
        if(sum%i==0){
            cout<<"BOWWOW"<<endl;
            return 0;
        }
    }

    cout<<"WANWAN"<<endl;
    
    
}