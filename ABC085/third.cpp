#include<iostream>
using namespace std;

int main(){
    int N;
    long Y;
    cin>>N>>Y;

    for(int i=0;i<=N;++i){
        for(int k = 0; k <=N-i; k++)
        {   
            int z=N-i-k;
            if(i*10000+k*5000+z*1000==Y){
                cout<<i<<" "<<k<<" "<<z<<endl;
                return 0;
            }
        }
        
    }


    cout<<"-1 -1 -1"<<endl;
}