#include <iostream>

using namespace std;

int main() {
    long N, M;
    cin >> N >> M;
    int q = 0, w = 0, e = 0;
    if(M % 2) {
        w = 1;
        if((M - 3) / 2 + 1 >= N && (M - 3) / 4 + ((M - 3) % 4) / 2 + 1 <= N) {
            e = (M - 3) / 4;
            q = ((M - 3) % 4) / 2;
            while(q + w + e != N) {
                q += 2;
                e--;
                if(e < 0) {
                    cout << "-1 -1 -1" << endl;
                    return 0;
                }
            }
            cout << q << " " << w << " " << e << endl;
            return 0;
        }
    } else {
        if(M / 2 >= N && M / 4 + (M % 4) / 2 <= N) {
            e = M / 4;
            q = (M % 4) / 2;
            while(q + w + e != N) {
                q += 2;
                e--;
                if(e < 0) {
                    cout << "-1 -1 -1" << endl;
                    return 0;
                }
            }
            cout << q << " " << w << " " << e << endl;
            return 0;
        }
    }

    cout << "-1 -1 -1" << endl;
}