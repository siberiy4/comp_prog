#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<long> vec(1);

    cin>>vec[0];

    for(int i=1;;++i){
        long tmp;
        if(vec[i-1]%2==0){
            tmp=vec[i-1]/2;
        }else{
            tmp=vec[i-1]*3+1;
        }
        vec.emplace_back(tmp);
        for(int k=0;k<i;++k){
            if(vec[k]==vec[vec.size()-1]){
                cout<<i+1<<endl;
    return 0;
            }
        }
    }



}

