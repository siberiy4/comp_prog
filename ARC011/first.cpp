#include <iostream>

using namespace std;

int main() {
    long m, n, N;
    cin >> m >> n >> N;

    long ans = N;
    long tmp = N;
    while(tmp >= m) {
        tmp -= m;
        tmp += n;
        ans += n;
    }

    cout << ans << endl;
}
