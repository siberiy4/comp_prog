#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int main(){
    int D,G;
    cin>>D>>G;
    vector<pair<long ,long>>  vec(D);

    long ans=1e9;

    for(int i=0;i<D;++i)
    {  
        cin>>vec[i].first>>vec[i].second;
    }


    for(long i = 0; i < (1<<D); i++)
    {
        long sum=0;
        long tmp=0;

        long restM=-1;
        for(int k=0;k<D;++k){
            if(i&(1<<k)){
                sum+=100*(k+1)*vec[k].first+vec[k].second;
                tmp+=vec[k].first;
            }else{
                restM=k;
            }
        }
        if(sum<G){
            int s1=100*(restM+1);
            int need=(G-sum+s1-1)/s1;
            if(need>=vec[restM-1].first){
                continue;
            }
            tmp+=need;
        }

        ans=min(ans,tmp);

    }
    
    cout<<ans<<endl;
}