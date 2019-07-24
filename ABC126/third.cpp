#include <bits/stdc++.h>

using namespace std;

int main() {

    long long N, M, A, B = 0, C = 1, D;
    double ans = 0;
    long double now = 1;
    long double kote = 1;
    string S;

    cin >> N >> M;
    A = M;
    bool ka = false;
    kote = 1.0 / N;

    while(A > 0) {
        A = A >> 1;
        now /= 2.0;
        B++;
    }

    for(long i = 1; i <= N; i++) {
        if(i >= M) {
            ans += kote;
        } else {
            ans += kote * now;
            now *= 2;
        }
    }

    printf("%.9f\n", ans);

    cout << A << " " << B << endl;
}