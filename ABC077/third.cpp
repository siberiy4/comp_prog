#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<long> A(N);
    vector<long> B(N);
    vector<long> C(N);
    for(auto &x:A){
        cin>>x;
    }
    for(auto &x:B){
        cin>>x;
    }
    for(auto &x:C){
        cin>>x;
    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());

    long long ans=0;

    for(int i=0;i<N;++i){
        long long low=lower_bound(A.begin(),A.end(),B[i])-A.begin();
        long long hi=C.end()-upper_bound(C.begin(),C.end(),B[i]);
        if(low<0)low=0;
        if(hi<0)hi=0;
        ans+=hi*low;
    }


    cout<<ans<<endl;
}