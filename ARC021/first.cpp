#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> res(4, vector<int>(4));
    for(int i = 0; i < 4; i++) {
        for(int k = 0; k < 4; k++) {
            cin >> res[i][k];
        }
    }
    bool ans = false;

    for(int i = 0; i < 4; i++) {
        for(int k = 0; k < 4; k += 2) {
            if(res[i][k] == res[i][k + 1]) {
                ans = true;
            }
        }
    }

    for(int i = 0; i < 4; i += 2) {
        for(int k = 0; k < 4; k++) {
            if(res[i][k] == res[i + 1][k]) {
                ans = true;
            }
        }
    }
    if(ans) {
        cout << "CONTINUE" << endl;
    } else {
        cout << "GAMEOVER" << endl;
    }
}