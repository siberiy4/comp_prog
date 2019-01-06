#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N;
    cin>>N;

    deque<long long> arr;

    while(N!=0){
        long long tmp=N%10;
        arr.push_front(tmp);
        N/=10;
    }

    vector<pair<long long,long long>> nana;

    for(long long i=0;i<arr.size()-2;i++){
        long long si=arr[i]*100+arr[i+1]*10+arr[i+2];
        nana.emplace_back(make_pair(abs(si-753),si));

    }

    sort(nana.begin(),nana.end());


    

    cout<<nana[0].first<<endl;
}