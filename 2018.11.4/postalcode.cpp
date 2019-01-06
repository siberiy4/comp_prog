#include<iostream>
#include<string>

using namespace std;


int main(){
    string str;
    int A,B;

    cin>>A>>B>>str;

    for(int i=0;i<str.size();++i){
        if(i==A){
            if(str[i]!='-'){
                cout<<"No"<<endl;
                return 0;
            }
        }else{
            if(str[i]=='-'){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }

    cout<<"Yes"<<endl;
}
