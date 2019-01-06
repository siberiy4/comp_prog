#include<bits/stdc++.h>

using namespace std;

int main(){

    int N=0,K=0;

    cin>>N>>K;

    vector<long> arr(N);
    vector<long> sum(N);

    
// first
    for(int i=0;i<N;i++){
        cin>>arr[i];
        sum[i]=arr[i];
        if(i!=0){
            sum[i]+=sum[i-1];
        }
    }

    for(int i=0;i<N;++i){ 
        long tmp=0;
        for(int k=i+1;k<N;++k){
            tmp=sum[k]-arr[i];
            sum.emplace_back(tmp);
        }
    }




    //sort(sum.begin(),sum.end());

    vector<int> bits;
    for(int flag= 0;flag<=sum.size();++flag){
        
    }

    sort(bits.begin(),bits.end());
    cout<<bits[bits.size()]<<endl;

    cout<<sum[sum.size()-K]<<endl;


}