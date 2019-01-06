#include<iostream>
#include<string>

using namespace std;

int main(){
    string S;
    cin>>S;

    if(S[0]>'Z'){
        S[0]+='A'-'a';
    }

    for(int i=1;i<S.size();++i){
    if(S[i]<='Z'){
        S[i]+='a'-'A';
    }
    }


    cout<<S<<endl;

}