#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    string S,T;
    cin>>S>>T;

    sort(S.begin(),S.end());
    sort(T.rbegin(),T.rend());

    for(int i=0;i<min(S.size(),T.size());++i){ 
        if(S[i]<T[i]){
            cout<<"Yes"<<endl;
            return 0;
        }else if(S[i]>T[i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(S.size()<T.size()){
        cout<<"Yes"<<endl;
        return 0;    
    }
    cout<<"No"<<endl;

}
