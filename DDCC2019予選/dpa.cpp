#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;

    cin>>N;

    int sum=0;

    vector<int> a(N);

    for(auto &x:a){
        cin>>x;
        sum+=x;
    }


    double ave = (double)(sum)/N;

    int ans=0;

    for(int i=1;i<N;++i){
        if(abs(a[i]-ave)<abs(a[ans]-ave)){
            ans=i;
            
        }
    }





cout<<ans<<endl;


}