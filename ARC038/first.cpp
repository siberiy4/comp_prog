#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    int N;
    cin>>N;
    vector<int> v(N);
    for (auto &x : v)
    {
        cin>>x;
    }
    
    sort(v.begin(),v.end(),greater<int>());

    long A=0,B=0;
    for (int i = 0; i < N; i++)
    {
        if(i%2==0){
            A+=v[i];
        }else{
            B+=v[i];
        }
    }
    

cout<<A<<endl;
}