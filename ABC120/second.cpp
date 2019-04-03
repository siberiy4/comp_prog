#include<bits/stdc++.h>

using namespace std;


int main(){
    long long A,B,K;
    long long ans=0;
    string S;
    double Q;

    long tmp;

    cin>>A>>B>>K;


    vector<int> vec;


    for(int i=1;i<=max(A,B);++i){
        if(A%i==0&&B%i==0){
            vec.push_back(i);
        }
    }



    ans=vec[vec.size()-K];

   cout<<ans<<endl;


}