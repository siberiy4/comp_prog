#include <algorithm>
#include <deque>
#include <iostream>

using namespace std;

int main() {
    int L, R;
    cin >> L >> R;
    deque<int> left(L);
    deque<int> right(R);
    for(auto &x : left) {
        cin >> x;
    }
    for(auto &x : right) {
        cin >> x;
    }
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    int ans = 0;
    int r = 0, l = 0;
    while(!left.empty() && !right.empty()) {

        if(left.front() == right.front()) {
            left.pop_front();
            right.pop_front();
            ans++;
        } else if(left.front() < right.front()) {
            left.pop_front();
        } else {
            right.pop_front();
        }
    }

    cout << ans << endl;
}
