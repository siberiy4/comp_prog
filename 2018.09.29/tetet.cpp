#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){

    int N;
    cin>>N;

    int tmp=N/2;

    if(N%2!=0){
        cout<<tmp*(tmp+1)<<endl;
    }else{
        cout<<tmp*tmp<<endl;
    }

}