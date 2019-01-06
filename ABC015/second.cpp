#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;

    vector<int> bagu;

    for(int i=0;i<N;++i){
        int tmp;
        cin>>tmp;
        if(tmp!=0){
            bagu.emplace_back(tmp);
        }
    }

    long sum=accumulate(bagu.begin(),bagu.end(),0);

    int ans=sum/bagu.size();


    if(sum!=ans*bagu.size()){
        ans++;
    }

cout<<ans<<endl;

    return 0;
}
