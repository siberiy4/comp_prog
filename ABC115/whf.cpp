#include <bits/stdc++.h>
#define int long long

using namespace std;

vector<long long > baga, pate;

long long  dfs(int size, long long  num){

    // 
    if(num <= 0) return 0;
    long long  ans = 0;
    
    
    if(baga[size] <= num) return pate[size];

    ans += dfs(size - 1, min(num, baga[size] / 2 + 1) - 1);
    if(num > baga[size] / 2) {
        ans += 1;
        ans += dfs(size - 1, num - (baga[size] / 2) - 1);
    }
    return ans;
}

signed main(){

    long long  n, k;
    cin >> n >> k;

    baga.assign(n+1, 0), pate.assign(n+1, 0);
    baga[0] = 1;
    pate[0] = 1;

    for(int i=0;i<n;i++){
        baga[i+1] = baga[i] * 2 + 3;
        pate[i+1] = pate[i] * 2 + 1;
    }

    cout << dfs(n, k) << endl;
}