#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> stso{5,1,2,3,4,4};
    vector<int> so{5,1,2,3,4,4};

    sort(so.begin(),so.end());
    stable_sort(stso.begin(),stso.end());

    cout<<so[0]<<endl;
    cout<<so[1]<<endl;
    cout<<so[2]<<endl;
    cout<<so[3]<<endl;
    cout<<so[4]<<endl;
    cout<<stso[0]<<endl;
    cout<<stso[1]<<endl;
    cout<<stso[2]<<endl;
    cout<<stso[3]<<endl;
    cout<<stso[4]<<endl;



}
