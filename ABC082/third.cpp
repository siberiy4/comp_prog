#include<iostream>
#include<map>

using namespace std;

int main(){
    int N;
    cin>>N;
    map<long ,long> mp;

    for(long i=0;i<N;++i){
        long long tmp;
        cin>>tmp;

        mp[tmp]++;
    }
    long ans=0;
    for(auto itr=mp.begin();itr!=mp.end();++itr){
        if(itr->second>itr->first){
            ans+=abs(itr->second-itr->first);
        }else if(itr->second<itr->first){
            ans+=itr->second;
        }
    }


    cout<<ans<<endl;
}