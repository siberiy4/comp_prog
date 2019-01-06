#include<bits/stdc++.h>

using namespace std;

int main(){

    int N=0,K=0;

    cin>>N>>K;

    vector<long> arr(N);
    vector<long> sum(N);

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
            tmp=sum[k]-sum[i];
            sum.emplace_back(tmp);
        }
    }


    set<long> st;



    for(int i=0;i<sum.size();++i){
        st.insert(sum[i]);

    }



    int ans=0;
    int tmp=0;

    for(auto b=st.rbegin();b!=st.rend();b++){
        for(int k=0;k<sum.size();++k){
            if((*b&sum[k]) == (*b)){
              tmp++;

            }
        }



    if(tmp>=K){
        ans=*b;
        break;
    }
    tmp=0;

    }


    cout<<ans<<endl;



}