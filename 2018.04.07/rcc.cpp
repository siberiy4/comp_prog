#include<bits/stdc++.h>
using namespace std;

int main(){
    int N=0,M=0;
    long long  dp[500][10005];
    //long long  dp[500][105];
    long long V[505];
    long long T[505];

    cin>>N>>M;

    for (int i = 0; i < N; i++){

        cin >> V[i] >> T[i];
    }

    for (int i = 0; i < N; ++i) {
        for (int w = 0; w <= M; ++w) {
        if (w >= T[i]) dp[i+1][w] = max(dp[i][w-T[i]] + V[i], dp[i][w]);
        else dp[i+1][w] = dp[i][w];
        }
    }
    cout << dp[N][M] << endl;
}



