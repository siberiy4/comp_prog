#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string A,B;

    cin>>A>>B;

    vector<int> v(6);
    string tmp;
    tmp=A;
    tmp[0]='9';
    v[0]=stoi(tmp)-stoi(B);
    tmp=A;
    tmp[1]='9';
    v[1]=stoi(tmp)-stoi(B);
    tmp=A;
    tmp[2]='9';
    v[2]=stoi(tmp)-stoi(B);

    tmp=B;
    tmp[0]='1';
    v[3]=stoi(A)-stoi(tmp);


    tmp=B;
    tmp[1]='0';
    v[4]=stoi(A)-stoi(tmp);

    tmp=B;
    tmp[2]='0';
    v[5]=stoi(A)-stoi(tmp);


cout<<*max_element(v.begin(),v.end())<<endl;;


}