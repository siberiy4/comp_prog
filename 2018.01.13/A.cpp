#include<bits/stdc++.h>
using namespace std;
int main(){
    int s;
    int a[4];
    cin>>s;
    for(int i=3;i>=0;i--){
        a[i]=s%10;
        s=s/10;
    }

    if(a[0]==a[2]&&a[1]==a[3]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}