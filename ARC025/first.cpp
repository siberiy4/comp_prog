#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
int main() {
    vector<int> vec(7);
    for(auto &x : vec) {
        cin >> x;
    }
    for(int i = 0; i < 7; i++) {
        int tmp;
        cin >> tmp;
        if(vec[i] < tmp) {
            vec[i] = tmp;
        }
    }

    cout << accumulate(vec.begin(), vec.end(), 0) << endl;
}