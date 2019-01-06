#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0;
    cin>>N;

    string num=to_string(N);

    for(int i=0;i<3;++i){
        if(num[i]=='1'){
            num[i]='9';
        }else{
            num[i]='1';
        }
    }

    cout<<num<<endl;

            

}