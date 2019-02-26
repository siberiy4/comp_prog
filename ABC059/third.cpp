#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(){
    int N;
    cin>>N;

    vector<long> vec(N);
    vector<long> svec(N);

    cin>>vec[0];
    svec[0]=vec[0];

    for(int i=1;i<N;++i){
        cin>>vec[i];
        svec[i]=svec[i-1]+vec[i];
    }
    
    long ans=0;
    long tmp=0;
    bool tem=false;//trueなら前値がマイナス
    if(vec[0]<0)tem=true;
    for(int i=1;i<N;++i){
        int to=0;
        if(tem){
            if(svec[i]+tmp<=0){
                to=abs(svec[i]+tmp-1);
                ans+=to;
                tmp+=to;
                vec[i]+=to;
            }
            tem=false;
        }else{
            if(svec[i]+tmp>=0){
                to=abs(svec[i]+tmp+1);
                ans+=to;
                tmp-=to;
                vec[i]-=to;
            }
            tem=true;
        }

    }

    if(accumulate(vec.begin(),vec.end(),0)==0){
        ans++;
    }

    cout<<ans<<endl;
}