#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;



int main(){
    string s;
    int choose;
    cin>>s>>choose;

    vector<string> arr;



    
string tes;
    for(int i=0;i<s.size();++i){
    tes="";

        for(int k=i;k<(i+choose)&&k<s.size();++k){
            tes.push_back(s[k]);
            arr.push_back(tes);
        }
    }


    set<string> ok(arr.begin(),arr.end());
    arr.assign(ok.begin(),ok.end());

    cout<<arr[choose-1]<<endl;

}