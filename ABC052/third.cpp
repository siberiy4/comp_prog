#include<iostream>

#include<vector>

using namespace std;

template<typename input_Integer>
void is_Prime(input_Integer N,vector<int>& Prime){


    vector<bool> check(N+1,true);
    check[0]=false;
    check[1]=false;


    for(input_Integer i = 2; i * i <= N; ++i){
        if(check[i]){
            for(input_Integer k = i * 2; k < N; k += i){
                check[k] = false;
            }
        }
    }


    for(input_Integer i=2;i<N;++i){
        if(check[i]){
            Prime.emplace_back(i);
        }
    }

}


int main(){
    long long N;
    cin>>N;
    long long  ans=1;

    vector<int> vec(1000,1);
    vector<int> prime;
    is_Prime(1000,prime);

    for(int i=1;i<=N;++i){
        int tmp=i;
        for(int k=0;k<prime.size();++k){
            while(tmp%prime[k]==0){
                vec[prime[k]]++;
                tmp=tmp / prime[k];
            }
        }


    }


    for(auto &x:vec){
        ans*=x;
        
        ans%=1000000007;
    }

    cout<<ans<<endl;

}