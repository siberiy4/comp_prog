#include<bits/stdc++.h>
using namespace std;


bool  test(deque<long> &tes,long now,long L){
    bool ten=false;

    deque<long> ri(tes.begin(),tes.end());
    deque<long> le(tes.begin(),tes.end());

    long rnow=ri.front();
    ri.pop_front();
    long lnow=le.back();
    le.pop_back();

    if(check(ri,rnow,L)<check(le,lnow,L)){
        ten=true;
    }


    return ten;

}

int main(){
    long L;
    long N;
    cin>>L>>N;
    deque<long> tes(N);
    long tmp;

    for(auto &x:tes){
        cin>>x;
    }


    long long ans=0;
    sort(tes.begin(),tes.end());

    long now=0;


    for(long i=0;i<N;i++){
        bool fen=false;
        if(abs(L-tes.back()+now)==abs(tes.front()-now)){
            fen=test(tes,now,L);
        }
        
        
        
        if(abs(L-tes.back()+now)>abs(tes.front()-now)||fen){
            ans+=abs(L-tes.back()+now);
            now=tes.back();
            tes.pop_back();
        }else{
            ans+=abs(tes.front()-now);
            now=tes.front();
            tes.pop_front();
        }

    }


    cout<<ans<<endl;


}