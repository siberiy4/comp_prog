#include<bits/stdc++.h>
using namespace std;

int main(){
    char array[52][52];
    vector<int> kanousei;
    int i=0,H,W,N;
    long long ans=0

    cin>>H;
    cin>>W;


    for(i=0;i<H;i++){ 
        for(int j=0;j<W;j++){ 
            cin>>array[i][j];
        }
    }

    for(i=W-1;i>=0;i--){
        if(array[0][i]=="."){
            kanousei.push_back(i);
        }
    }

    for(int j=0;j<kanousei.size();j++){

    }

    for(i=0)


}
