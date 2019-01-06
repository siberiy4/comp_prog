#include <bits/stdc++.h>
using namespace std;
int main(){
    auto N=0,M=0,X=0,a=0,ans=0,b=0,c=0,bsum=0,asum=0;
    string str;
    vector<int> vec(105);

    cin>>N>>M>>X;

    for(int i=1;i<=M;i++){
        cin>>vec[i];
        if(vec[i]<X){
            bsum++;
        }else{
            asum++;
        }
    }


    cout<<min(asum,bsum)<<endl;
}