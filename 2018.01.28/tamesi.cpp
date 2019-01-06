#include<bits/stdc++.h>
using namespace std;
int main(){
char a[105];
    int N,L;
    int b,ans=0,flag=0;
    string display;

    vector<string> aheahe;


    cin>>N>>L;

    for(int i=0;i<N;i++){
        cin>>display;
        aheahe.push_back(display);
    }
    sort(aheahe.begin(),aheahe.end());


    for(int i=0;i<N;i++){ 
        cout<<aheahe[i];
    }
    cout<<endl;
}