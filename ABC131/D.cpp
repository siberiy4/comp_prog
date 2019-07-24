#include<bits/stdc++.h>


using namespace std;

int main(){
    long long N,A,B,C,D;
    long long ans=0;

    string S;

    cin>>N;

    vector<pair<long ,long>> v(N);

    for (auto &x : v)
    {
        cin>>x.second>>x.first;
    }
    

    sort(v.begin(),v.end());

    long long sum=0;

    for (auto &x : v)
    {

       // cout<<x.first<<" "<<sum<<endl;
        sum+=x.second;
        if(sum>x.first){
            cout<<"No"<<endl;
            return 0;
        }
    }
    
cout<<"Yes"<<endl;



}