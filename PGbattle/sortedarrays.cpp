#include<iostream>
#include<deque>


using namespace std;


int main(){
    int N;

    cin>>N;

    deque<long> ar(N);
    deque<long> mono;

    for(auto &x :ar){
        cin>>x;
    }

    int be=ar[0];
    bool hueru=true;
    int ans=0;

    cout<<ans<<endl;
    
}