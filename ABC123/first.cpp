#include<bits/stdc++.h>

using namespace std;
int main(){
    long long A,B,C,D,E,K;
    vector<long long > X(5);

for(auto &x:X){
    cin>>x;

}
    cin>>K;

    for(int i=0;i<4;++i){
        for(int k=i+1;k<5;++k){ 
            if(abs(X[i]-X[k])>K){
                cout<<":("<<endl;
                return 0;
            }
    }
    }

    cout<<"Yay!"<<endl;
}