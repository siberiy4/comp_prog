#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0,A=0,B=0,C=0;
    string X,Y,tmp;

    int ans=0;

    cin>>X>>Y;

    for(int i=0;i<X.size();i++){
        tmp=X[X.size()-1];
        for(int k=0;k<X.size()-1;k++){
            tmp+=X[k];
        }
        X=tmp;

        if(X==Y){
            cout<<"Yes"<<endl;
            return 0;
        }
    }

    cout<<"No"<<endl;
}