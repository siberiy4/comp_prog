#include<iostream>

using namespace std;


int main(){
    string S;
    bool ans=true;

    cin>>S;

    for (int i = 0; i < (S.size()+1)/2; i++)
    {
        if(S[i]==S[S.size()-1-i]||S[i]=='*'||S[S.size()-1-i]=='*'){

        }else{
            ans=false;
        }
    }
    

    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}