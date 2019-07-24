#include <bits/stdc++.h>

using namespace std;

int main() {

    long double N, M, A, B = 0, C = 1, D = 0, X = 0;
    long double ans = 1;
    long long now = 1;
    long double kote = 1;
    string S;

    cin >> N >> M;
    A = M;
    bool ka = false;
    kote = 1.0 / N;

    while(A > 0) {
        A = A >> 1;
        now *= 2.0;
    }

    D = (N >= M ? N - M + 1 : 0);

    for(long i = 1; i <= N; i++) {
        if(i >= M) {
            break;
        } else {

            while(i * now >= M) {
                now /= 2.0;
            }

            now *= 2;

            ans += kote / now;
        }
    }

    ans += (kote * D) - 1;

    cout << setprecision(11) << ans << endl;
}