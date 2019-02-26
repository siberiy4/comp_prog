#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int N;
    cin>>N;
    int P;
    cin>>P;
    int cnt=0;
    for(int i=0;i<N;++i){
        int tmp;
        cin>>tmp;
        if(tmp%2==0){
            cnt++;
        }
    }
    if(cnt==N){
        if(P==1){cout<<0<<endl;
        }else{
            long long ans=pow(2,N);
            cout<<ans<<endl;
        }
    }else{
        long long ans=pow(2,N-1);
        cout<<ans<<endl;
    }


    
}