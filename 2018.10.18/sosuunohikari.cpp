#include<iostream>
#include<vector>

using namespace std;


template<typename input_Integer>
bool is_Prime(input_Integer N){


    vector<input_Integer> Prime;
    vector<bool> check(N+1,true);
    check[0]=false;
    check[1]=false;


    for(input_Integer i = 2; i * i <= N; ++i){
        if(check[i]){
            Prime.emplace_back(i);
            for(input_Integer k = i * 2; k < N; k += i){
                check[k] = false;
            }
        }
    }

    for(input_Integer i = 0; i < Prime.size(); ++i){
        if(N%Prime[i]==0){
            return false;
        }
    }

    return true;
}


int main(){
    long N;

    cin>>N;

    if(is_Prime(N)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }



    
}