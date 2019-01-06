#include<bits/stdc++.h>
using namespace std;

int main(){
    int A=0,B=0;
    int ans=0;
    cin>>A>>B;

    ans=B/A;

    if(B>A*ans)ans++;


    cout<< ans <<endl;
}