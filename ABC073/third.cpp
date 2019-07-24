#include<iostream>
#include<map>

using namespace std;


int main(){
    int N;
    cin>>N;

    map<long,int> mp;

    int tmp;
    for (int i = 0; i < N; i++)
    {
        cin>>tmp;

        mp[tmp]++;
    }

    int ans=0;

    for(auto itr=mp.begin();itr!=mp.end();itr++){
        if(itr->second%2){
            ans++;
        }
    }
    
    cout<<ans<<endl;


}
