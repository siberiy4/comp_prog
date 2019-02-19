#include<bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin>>S;
    string keye="keyence";

    bool check=true;
    for(int i=0;i<keye.size();++i){
        if(S[i]!=keye[i]){
            check=false;
        }
    }
    if(check){
        cout<<"YES"<<endl;
        return 0;
    }

    check=true;
    for(int i=S.size()-1;S.size()-keye.size()>=i;--i){
        if(S[i]!=keye[i]){
            check=false;
        }
    }
    if(check){
        cout<<"YES"<<endl;
    }



    int i=0;
    while(S[i]==keye[i]){
        i++;
    }

    while(S[S.size()-(keye.size()-i)]==keye[i]){
        i++;
    }


    if(i!=keye.size()){

        cout<<"YES"<<endl;
    }else{cout<<"NO"<<endl;}

}