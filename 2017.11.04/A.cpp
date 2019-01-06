#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<string> C1(3);
    vector<string> C2(3);
    
    cin >>C1[0]>>C1[1]>>C1[2];
    cin >>C2[0]>>C2[1]>>C2[2];

    if(C1[0]==C2[2]&&C1[2]==C2[0]&&C1[1]==C2[1]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}