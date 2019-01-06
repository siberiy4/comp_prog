#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,K;
    long ans=0;
    cin>>N>>K;
    vector<long> sei;
    vector<long> hu;


    int tmp;
    for(int i=0;i<N;i++){
        cin>>tmp;

        if(tmp<0){
            hu.push_back(tmp);
        }else{ 
            sei.push_back(tmp);
        }
    }

    sort(hu.begin(),hu.end(),greater<long>());

    int hun=0,sein=0;
    int pre=0;
    for(int i=0;i<K;i++){
        if(hu.size()>hun&&pre-hu[hun]<sei[sein]-pre||sei.size()<=sein){
            ans+=pre-hu[hun];
            pre=hu[hun];
            hun++;
        }else{
            ans+=sei[sein]+pre;
            pre=sei[sein];
            sein++;
        }
    }

    cout<<ans<<endl;

}