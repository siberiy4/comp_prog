#include<iostream>
#include<vector>

using namespace std;

int main(){

    int N,P;

    cin>>N>>P;
/*
    vector<int> bis(N);

    for(auto &x:bis){
        cin>>x;
    }
*/

    int odd=0,eve=0;

    for(int i=0;i<N;i++){
        int t;
        cin>>t;

        if(t%2==0){
            eve++;
        }else{
            odd++;
        }
    }

    long ans=0;


    if(P&&odd==0){
        cout<<0<<endl;
        return 0;
    }
    if(!P&&odd)


}