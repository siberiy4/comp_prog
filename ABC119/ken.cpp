#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int N;
vector<int> L;
vector<int> A; // A, B, C

int main() {
    cin >> N;
    A.resize(3);
    for (int i = 0; i < 3; ++i) cin >> A[i];
    L.resize(N);
    for (int i = 0; i < N; ++i) cin >> L[i];

    int res = 1<<29;
    vector<int> bit(3);
    for (bit[0] = 1; bit[0] < (1<<N); ++bit[0]) { // 0 は含めない
        for (bit[1] = 1; bit[1] < (1<<N); ++bit[1]) { // 0 は含めない
            // 共通要素あったらダメ
            if (bit[1] & bit[0]) continue;
            for (bit[2] = 1; bit[2] < (1<<N); ++bit[2]) { // 0 は含めない
                // 共通要素があったらダメ
                if (bit[2] & bit[0]) continue;
                if (bit[2] & bit[1]) continue;
                
                // sums: A〜C に選んだ竹の長さの合計、nums: A〜C に選んだ竹の本数
                vector<int> sums(3, 0), nums(3, 0);
                for (int i = 0; i < N; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        if (bit[j] & (1<<i)) {
                            sums[j] += L[i];
                            nums[j]++;
                        }
                    }
                }

                // score を求める
                int score = 0;
                for (int i = 0; i < 3; ++i) {
                    score += abs(sums[i] - A[i]); // +1, -1 のコスト
                    score += (nums[i] - 1) * 10; // 合体のコスト
                }
                res = min(res, score);
            }
        }
    }
    cout << res << endl;
}