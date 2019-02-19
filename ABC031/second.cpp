#include<iostream>

using namespace std;

int main(){
    int L,H;
    int N;
    cin>>L>>H>>N;
    for(int i=0;i<N;++i){
        int tmp;
        cin>>tmp;

        if(L>tmp){
            cout<<L-tmp<<endl;
        }else if(H<tmp){
            cout<<-1<<endl;
        }else{
            cout<<0<<endl;
        }
    }
}