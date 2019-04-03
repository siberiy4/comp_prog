#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<double> v(N);
    long T,A;
    cin>>T>>A;

    for(int i=0;i<N;++i){
        cin>>v[i];
        v[i]=fabs((double)A-(T-v[i]*0.006));
    }
    long ans=0;
    for(int i=1;i<N;++i){
        if(v[ans]>v[i]){
            ans=i;
        }
    }

    cout<<ans+1<<endl;
}

