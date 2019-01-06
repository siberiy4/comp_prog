#include<iostream>
#include<set>
#include<algorithm>

using namespace std;


int main(){
    int N;
    cin>>N;

    set<int> menu;
    for(int i=0;i<N;++i){
        int tmp;
        cin>>tmp;
        menu.insert(tmp);
    }

    auto itr=menu.end();
    itr--;
    itr--;

    cout<<*itr<<endl;
}
