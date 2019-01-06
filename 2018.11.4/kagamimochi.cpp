#include<iostream>
#include<set>

using namespace std;

int main(){
    int N;
    cin>>N;
    set<int> mochi;

    for(int i=0;i<N;++i){
        int tyn;
        cin>>tyn;
        mochi.insert(tyn);
    }
    

    cout<<mochi.size()<<endl;
}


