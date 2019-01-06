#include<iostream>
#include<deque>
using namespace std;


int main(){
    int N;
    int ans=0;
    
    deque<int> slimes(N);
    cin>>N;

    int now,pre;

    cin>>pre;
    int continuous=1;

    for(int i = 1; i < N; i++)
    {
        cin>>now;

        if(pre==now){
            continuous++;
        }else{
            ans+=continuous/2;
            continuous=1;
        }

        pre=now;
    }
            ans+=continuous/2;
    

    cout<<ans<<endl;
}