#include <bits/stdc++.h>

using namespace std;

int main(){
    int ans=0,min,kari;
    map<long,int> count;
    vector<long long> a(200005);

    int N,K;

    cin >>N;
    cin >>K;

    for(int i=0;i<N;i++){
        cin>>kari;
        a[kari]++;
    }

    sort(a.begin(),a.end());

    for(int i=0;i<N-K;i++){
        ans=ans+a[i];
    }

    cout << ans << endl;

    return 0;

}