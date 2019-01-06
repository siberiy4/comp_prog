#include<bits/stdc++.h>


using namespace std;

int main(){
    long L;
    long N;
    cin>>L>>N;
    deque<long> mina;
    deque<long> plus;
    long tmp;


    for(long i=0;i<N;++i){


        cin>>tmp;

        if(tmp>(L/2)){
            tmp-=L;
        }

        if(tmp<0){
            mina.emplace_back(tmp);
        }else{
            plus.emplace_back(tmp);
        }
    }


    long long ans=0;
    sort(mina.rbegin(),mina.rend());

    for(auto &x:mina){
        cout<<x;
        cout<<"A ";
    }
    sort(plus.begin(),plus.end());
    for(auto &x:plus){
        cout<<x;
        cout<<"A ";
    }

    for(long i=0;i<N;i++){
        if(mina.empty()){
            ans+=plus.front();
            plus.pop_front();
        }else if(plus.empty()){
            ans+=mina.front();
            mina.pop_front();
        }else if(abs(mina.front())<plus.front()){
            ans+=abs(mina.front());
            mina.pop_front();
        }else{
            ans+=plus.front();
            plus.pop_front();
        }
    }

    cout<<ans<<endl;


}