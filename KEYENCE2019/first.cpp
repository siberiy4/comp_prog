#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec(4);

    for(auto &x:vec){
        cin>>x;

    }


    bool test=true;
    sort(vec.begin(),vec.end());

    if(vec[0]!=1){
        test=false;
    }
    if(vec[1]!=4){
        test=false;
    }

    if(vec[2]!=7){
        test=false;
    }

    if(vec[3]!=9){
        test=false;
    }

    if(test){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


}