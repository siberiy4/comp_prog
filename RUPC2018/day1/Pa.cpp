#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0;
    int tmp=0;
    vector<int> natural;


    cin>>N;
    for(int i=0;i<N;i++){
        cin>> tmp;
        natural.push_back(tmp);
    }

    sort(natural.begin(), natural.end());

    for(auto itr=natural.end()-1;itr!=natural.begin();--itr){
        for(auto pulled=natural.begin();pulled!=natural.end();++pulled){
            if((*itr-*pulled)%(N-1)==0&&*itr!=*pulled){
                cout<<*itr<<" "<<*pulled<<"\n";
                return 0;
            }
        }
    }
}