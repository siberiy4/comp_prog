#include<iostream>
#include<string>

using namespace std;


int main(int argc, char const *argv[])
{
    string S;
    cin>>S;

    string ans="";
    char now=S[0];
    int cnt=1;

    for(int i=1;i<S.size();++i){
        if(S[i]!=now){

            cout<<now;
            cout<<cnt;
            now=S[i];
            cnt=1;
        }else{
            cnt++;
        }
    }    

            cout<<now;
            cout<<cnt;
    cout<<endl;

    return 0;
}
