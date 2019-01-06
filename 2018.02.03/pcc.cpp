#include<bits/stdc++.h>
using namespace std;

void binary_search(string a,int n){
    int l=0,r=n;
    string t;
    int mid;
    while(1){
        mid=(l + r) / 2;
        cout<<mid<<endl;
        cin>>t;
        if(t=="Vacant")break;
        else if(t!=a)r=mid;
        else l =mid;
    }
}

int main(){ 
    int N;
    int count=0;
    string s,m;


    cin>>N;

    cout<<"0"<<endl;
    cin>>s;
    cout<<N-1<<endl;
    if(s=="Vacant")return 0;
    binary_search(s,N);
    return 0;
}