#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    long long ans = 0;
    vector<long long> RGB(3);
    cin >> N;
    vector<string> S(N);
    for(auto &x : S) {
        cin >> x;
    }

    for(int i = 0; i < N; i++) {
        for(int k = 1; k < S[i].size(); k++) {
            if(S[i][k - 1] == 'A' && S[i][k] == 'B') {
                ans++;
            }
        }
    }

    long long ab = 0, an = 0, nb = 0;

    for(int i = 0; i < N; i++) {
        if(S[i][0] != 'B' && S[i][S[i].size() - 1] == 'A') {
            an++;
        }
        if(S[i][0] == 'B' && S[i][S[i].size() - 1] == 'A') {
            ab++;
        }
        if(S[i][0] == 'B' && S[i][S[i].size() - 1] != 'A') {
            nb++;
        }
    }

    if(ab > 0) {
        if(an > 0 && nb > 0) {
            ans += ab + 1;
            an--;
            nb--;
        } else if(an > 0 && nb == 0) {
            ans += ab;
            an--;
        } else if(nb > 0 && an <= 0) {
            ans += ab;
            nb--;
        }else{
            ans+=ab-1;
        }
    }

    if(an > 0 && nb > 0) {
        ans += min(an, nb);
    }

    cout << ans << endl;
}