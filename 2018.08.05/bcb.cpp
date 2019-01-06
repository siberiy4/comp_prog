#include<bits/stdc++.h>
using namespace std;


int main(){
    int N=0,A=0,B=0,C=0,D=0;
    string str;
    int count = 0;
    int ans=0;
    bool check=true,CC=false;


    cin>>str;

    if(str[0]=='A'){
        for(int i=1;i<str.size();i++){
            
            if(str[i]=='C'&&1<i&&i<str.size()-1){
                if(CC){
                check=false;
                }else{
                    CC=true;
                }
            }

            else if(str[i]<'a'||'z'<str[i]){
                check=false;

            }
        }
    }

if(check&&CC){
    cout<<"AC"<<endl;
}else{
    cout<<"WA"<<endl;
}





}