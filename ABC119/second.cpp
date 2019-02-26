#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    double ans=0;
    cin>>N;
    vector<pair<double,string>> vec(N);

    for(auto &x:vec){
        cin>>x.first>>x.second;

        if(x.second=="JPY"){
            ans+=x.first;
        }else{
            ans+=x.first*380000.0;
        }
    }


    printf("%.5f\n",ans);
}