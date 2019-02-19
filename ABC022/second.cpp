#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> vec(100005,-1);


    for(int i=0;i<N;++i){
        int tmp;
        cin>>tmp;

        vec[tmp-1]++;

    }

    int ans=0;

    for(auto &x:vec){
        if(x>0){
            ans+=x;
        }
    }


    cout<<ans<<endl;

}