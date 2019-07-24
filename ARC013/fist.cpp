#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> dan(3);
    vector<int> ni(3);

    for (auto &x : dan)
    {
        cin>>x;
    }
    for (auto &x : ni)
    {
        cin>>x;
    }

    vector<int> ans(6);

    ans[0]=(dan[0]/ni[0])*(dan[1]/ni[1])*(dan[2]/ni[2]);
    ans[1]=(dan[0]/ni[0])*(dan[1]/ni[2])*(dan[2]/ni[1]);
    ans[2]=(dan[0]/ni[1])*(dan[1]/ni[0])*(dan[2]/ni[2]);
    ans[3]=(dan[0]/ni[1])*(dan[1]/ni[2])*(dan[2]/ni[0]);
    ans[4]=(dan[0]/ni[2])*(dan[1]/ni[0])*(dan[2]/ni[1]);
    ans[5]=(dan[0]/ni[2])*(dan[1]/ni[1])*(dan[2]/ni[0]);



    cout<<*max_element(ans.begin(),ans.end())<<endl;

}