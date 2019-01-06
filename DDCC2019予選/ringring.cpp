#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> bel(3);

    for(auto &x:bel){
        cin>>x;
    }

    cout<<accumulate(bel.begin(),bel.end(),0)-*max_element(bel.begin(),bel.end())<<endl;


    return 0;
}

