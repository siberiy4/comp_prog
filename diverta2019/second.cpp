#include <bits/stdc++.h>
using namespace std;

int main() {
    long R, G, B, N;

    long long ans = 0;

    scanf("%ld%ld%ld%ld", &R, &G, &B, &N);

    for(int i = 0; i <= 3000 / R + 1; ++i) {
        for(int k = 0; k <= (3000 - (R * i)) / G + 1; ++k) {
            if(i * R + G * k > N) {
                break;
            }
            for(int y = ((3000 - (R * i) - (k * G)) / B) + 10; y >= 0; --y) {
                if(i * R + G * k + y * B < N) {
                    break;
                }
                if(i * R + G * k + y * B == N) {
                    ans++;
                    break;
                }
            }
        }
    }

    printf("%lld\n", ans);
}