#include<iostream>

using namespace std;

int main(){
    string S;
    cin>>S;
    for (int  i = 0; i < (S.size()+1)/2; i++)
    {
        if(S[i]!=S[S.size()-1-i]){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    
}