#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


int main(){
    string S;
    int N;
    cin>>S>>N;

    for(int i=0;i<N;++i){
        int rig,lef;
        cin>>lef>>rig;
        reverse(S.begin()+lef-1,S.begin()+rig);        

    }

    cout<<S<<endl;

}