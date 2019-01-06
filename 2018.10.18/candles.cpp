#include<iostream>
#include<deque>
#include<cmath>


using namespace std;


int main(int argc, char const *argv[])
{
    int N,K;
    cin>>N>>K;

    long ans=0;

    deque<int> under;
    deque<int> over;

    int now_place=0;

    for(int i=0;i<N;i++){
        int t;
        cin>>t;
        if(t<0){
            under.emplace_back(t);
        }else{
            over.emplace_back(t);
        }

    }

    for(int i=0;i<K;i++){


        if(under.empty()){
            ans+=abs(now_place-over.front());
            now_place=over.front();
            over.pop_front();

        }else if(over.empty()){
            ans+=abs(now_place-under.back());
            now_place=under.back();
            under.pop_back();

        }else if(abs(now_place-under.back())<abs(now_place-over.front())){
            ans+=abs(now_place-under.back());
            now_place=under.back();
            under.pop_back();
        
        }else{
            ans+=abs(now_place-over.front());
            now_place=over.front();
            over.pop_front();
        }
    }
    
    cout<<ans<<endl;

    return 0;
}
