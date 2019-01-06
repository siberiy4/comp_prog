#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;

    cin>>n>>k;

    long long x=n/k,y;





    if(k%2==0){
        y=n/k;
        if(n%k>=(k/2)) y++;
    }else{
        y=0;
    }


    cout<<x*x*x+y*y*y<<endl;
}