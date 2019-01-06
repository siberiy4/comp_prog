#include<iostream>
#include<map>
#include<algorithm>
#include<string>


using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int N;

    map<string,int> mp;

    cin>>N;

    for(int i=0;i<N;++i){
        string S;
        cin>>S;

        mp[S];
        mp[S]=1+mp[S];

    }

    auto it=mp.begin();

    for(auto itr=mp.begin();itr!=mp.end();++itr ){

        if(itr==mp.begin()){
            continue;
        }else{
            if(it->second<itr->second){
                it=itr;
            }
        }


    }

    cout<<it->first<<endl;


    return 0;
}
