// Not Found 

#include<iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<bool> alfa(26,true);
    string S;

    cin>>S;


    for(int i=0;i<S.size();++i){
        alfa[S[i]-'a']=false;
    }


    for(int i=0;i<26;++i){
        if(alfa[i]){ 
            cout<<char(i+'a')<<endl;
            return 0;
        }
    }

    cout<<"None"<<endl;

    return 0;
}



