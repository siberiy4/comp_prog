#include <bits/stdc++.h>
 
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int main() {
    int N;
    map<string, int> cnt;
    cin >> N;
 
    string s;
    rep(i, N) {
        cin >> s;
        cnt[s]++;
    }
 
    string ans;
    int maxi = 0;
    for (auto e : cnt) {
        if (maxi < e.second) {
            maxi = e.second;
            ans = e.first;
        }
    }
 
    cout << ans << endl;
}