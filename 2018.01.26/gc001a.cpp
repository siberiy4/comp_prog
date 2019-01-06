#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,guzai=0;
    vector<int> kusi(205);

    cin>>N;

    for(int i=0;i<2*N;i++){
        cin>>kusi[i];
    }

    sort(kusi.begin(), kusi.end(),greater<>());




    for(int j=0;j<2*N;j=j+2){
        if(kusi[j]<kusi[j+1]){
            guzai=guzai+kusi[j];
        }else{
            guzai=guzai+kusi[j+1];            
        }

    }

    cout<<guzai<<endl;


}