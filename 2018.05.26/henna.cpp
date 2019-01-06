#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N = 0, A = 0, B = 0, ans = 0;
    cin >> N;
    vector<int> vec(N);

    for (auto &x : vec)
    {
        cin >> x;
    }
    sort(vec.begin(), vec.end());

    for (int i = 1; i < N; i++)
    {
        if (vec[i - 1] == vec[i])
        {
            vec[i] = 0;
            vec[i - 1] = 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (vec[i] > 0)
            ans++;
    }

    cout << ans << endl;
}