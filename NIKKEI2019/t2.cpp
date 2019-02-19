#include<bits/stdc++.h>

using namespace std;


int main(){
    long long N;
    cin>>N;
    deque<tuple<long long,long long,int>> ao(N);
    deque<tuple<long long,long long,int>> ta(N);
    vector<bool> check(N);

    long long ans=0;

    for(int i=0;i<N;++i){
        long long tm,am;
        cin>>tm>>am;
        ta[i]=make_tuple(tm,am,i);
        ao[i]=make_tuple(am,tm,i);

    }

    sort(ta.rbegin(),ta.rend());
    sort(ao.rbegin(),ao.rend());

    for(int i=0;i<(N+1)/2;++i){
        while(check[get<2>(ta[0])]){
            ta.pop_front();
        }
        cout<<get<2>(ta[0])<<" ";
        ans+=get<0>(ta[0]);
        check[get<2>(ta[0])]=true;
        ta.pop_front();

        if(i*2+1==N){break;}
        while(check[get<2>(ao[0])]){
            ao.pop_front();
        }
        ans-=get<0>(ao[0]);
        check[get<2>(ao[0])]=true;
        ao.pop_front();



    }


cout<<ans<<endl;

}