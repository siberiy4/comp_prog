#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,T,A;
    cin>>N>>T>>A;

    deque<int> H(N);
    for(auto &tmp:H){
        
        int x;
        cin>>x;
        tmp=T-x*0.006;
    }

    int ansn=0;

    for(int i=1;i<N;i++){
        if(abs(H[ansn]-A)>abs(H[i]-A)){
            ansn=i;
        }
    }

    cout<<ansn+1<<endl;


}