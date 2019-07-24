#include<bits/stdc++.h>


using namespace std;

int main(){
    long long N,A,B,C,D;
    long long ans=0;

    string S;

    cin>>S;


    for (int i = 1; i < 4; i++)
    {
        if(S[i]==S[i-1]){
            cout<<"Bad"<<endl;
            return 0;
        }
    }
    
cout<<"Good"<<endl;

}