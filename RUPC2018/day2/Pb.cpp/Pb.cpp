#include<bits/stdc++.h>
using namespace std;

int kazoe(int N){
    int count=0;
    int origin=0;
    int repli=0;

    for(int i=0;i<32;i++){
        int mask=1<<i;

        if(N&mask){
            count=i;
            origin++;
        }
    }
    if(count<origin){
        return origin;
    }else{
        return count;
    }
}


int main(){
    int N;

    cin>>N;

    cout<<kazoe(N)<<endl;


}