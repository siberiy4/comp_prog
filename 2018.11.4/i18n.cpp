#include<iostream>
#include<string>

using namespace std;


int main(){
    string S;
    cin>>S;
    string ans="";
    int count=0;

    for(int i=0;i<S.size();++i){
        if(i==0){
            cout<<S[i];
        }else if(i==S.size()-1){
            
            cout<<count;
            cout<<S[i]<<endl;
        }else{
            count++;
        }
    }


}
