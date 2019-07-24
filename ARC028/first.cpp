#include <iostream>

using namespace std;

int main() {
    int N, A, B;

    cin >> N >> A >> B;

    while(1) {
        N -= A;
        if(N <= 0) {
            cout << "Ant" << endl;
            return 0;
        }

        N -= B;
        if(N <= 0) {
            cout << "Bug" << endl;
            return 0;
        }
    }
}