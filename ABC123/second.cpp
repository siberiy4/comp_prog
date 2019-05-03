#include<bits/stdc++.h>

using namespace std;
int main(){
    long long N;
    vector<long long> v(5);

    for(auto &x:v){
        cin>>x;
    }
    long long ans=0;
    vector<long long> tes;
    long max=0;

    for(int i=1;i<5;++i){
        if((v[max]%10)>(v[i]%10)&&v[i]%10!=0){
            max=i;
        }
    }


    for(int i=0;i<5;++i){
        if(max==i){
            ans+=v[i];
        }else{
            if(v[i]%10==0){
                ans+=v[i];
            }else{
                ans+=v[i]+(10-v[i]%10);
            }
        }
    }

    cout<<ans<<endl;
}