#include<iostream>
#include<deque>

using namespace std;


int main(){
    long N,M,A,B;

    cin>>N>>M>>A>>B;

    deque<long> C(M);
    for(auto&x : C)
    {
        cin>>x;
    }
    

    for(int i = 0; i < M; i++)
    {
        if(N<=A)N+=B;
        N-=C[i];
        if(N<0){
            cout<<i+1<<endl;
            return 0;
        }

    }

    cout<<"complete"<<endl;
    
    

}