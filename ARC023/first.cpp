#include <iostream>

using namespace std;

int main() {
    long y, m, d;
    cin >> y >> m >> d;

    long now = 735369;

    if(m <= 2) {
        y--;
        m += 12;
    }

    long te = 365 * y + abs(y / 4) - abs(y / 100) + abs(y / 400) +
              abs(306 * (m + 1) / 10) + d - 429;


    cout << now - te << endl;
}