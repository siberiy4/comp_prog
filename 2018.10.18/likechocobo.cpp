#include <bits/stdc++.h>
using namespace std;

vector<int> eratos(int n){
    vector<int> primeVec;
    vector<bool> isPrime(n+1, true);
    isPrime[0] = false; isPrime[1] = false;
    for(int p = 2; p*p <= n; p++){
        if(isPrime[p]) for(int i = p*2; i <= n; i += p) isPrime[i] = false;
    }
    for(int p = 2; p <= n; p++) if(isPrime[p]) primeVec.push_back(p);
    return primeVec;
}

int main(){
    int q;
    cin >> q;
    vector<int> sosuu = eratos(100000);
    vector<bool> niteru(100000+1);
    
    for(int x : sosuu){
        niteru[x] = true;
    }
    for(int i = 100000; i >= 0; i--){
        if(niteru[i] == true) niteru[i] = niteru[(i+1)/2];
    }

    vector<int> vec;
    for(int i = 0; i <= 100000; i++){
        if(niteru[i] == true) vec.push_back(i);
    }

    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        int ans = upper_bound(vec.begin(), vec.end(), r) - lower_bound(vec.begin(), vec.end(), l);
        cout << ans << endl;
    }
}
