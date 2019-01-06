#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, W = 0, E = 0, sumW = 0, sumE = 0;
    string S;
    int ans = 0;

    cin >> N >> S;
    vector<int> FrontW(N);
    vector<int> FrontE(N);
    vector<int> check(N);

    if (S[0] == 'W')
    {
        FrontW[0] += 1;
    }
    else
    {
        FrontE[0] += 1;
    }

    for (int i = 1; i < N; i++)
    {
        if (S[i] == 'W')
        {
            FrontW[i] += FrontW[i - 1] + 1;
        }
        else
        {
            FrontE[i] += FrontE[i - 1] + 1;
        }
    }

    check[0] = FrontE[N - 1];

    for (int i = 1; i < N - 1; i++)
    {
        check[i] = FrontW[i - 1] + (FrontE[N - 1] - FrontE[i + 1]);

        if (check[i] <= 0)
        {
            check[i] = 100000;
        }
    }
    check[N - 1] = FrontW[N - 1];

    ans = *min_element(check.begin(), check.end());

    cout << ans << endl;
}