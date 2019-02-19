#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int N,a,b,K;
    cin>>N;
    vector<int> vec(N);
    cin>>a>>b;
    vec[a-1]++;
    vec[b-1]++;

    cin>>K;

    for(int i=0;i<K;++i){
        int tmp;
        cin>>tmp;
        vec[tmp-1]++;
    }

    for(auto &x:vec){
        if(x>1){
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;


    return 0;
}
