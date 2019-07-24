#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<long, bool>> v(N);
    for(auto &x : v) {
        cin >> x.first;
        x.second = true;
    }

    long ans = 0;

    for(int i = 0; i < N; i++) {
        if(v[i].second) {
            ans++;
        }

        for(int k = i + 1; k < N; k++) {
            if(v[k].first % v[i].first == 0) {
                if(v[k].second) {
                    v[k].second = false;
                } else {
                    v[k].second = true;
                }
            }
        }
    }

    cout << ans << endl;
}