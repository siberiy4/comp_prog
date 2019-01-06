#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    vector<long> stick(N);

    for(auto &x:stick){
        cin>>x;

    }

    sort(stick.rbegin(),stick.rend());

    vector<long> wh;
    long check=stick[0];
    for(int i=1;i<N;++i){
        if(check==stick[i]){
            wh.emplace_back(check);
            check=0;
        }else{
            check=stick[i];
        }
        if(wh.size()==2){
            break;
        }    
    }
    if(wh.size()<2){
        cout<<0<<endl;
        return 0;
    }
    cout<<wh[0]*wh[1]<<endl;

    return 0;
}


