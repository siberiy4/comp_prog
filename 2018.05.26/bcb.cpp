#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    string S, s;
    int ans = 0;

    cin >> N >> S;

    vector<int> count(N);
    vector<bool> Lcheck(26);
    vector<bool> Rcheck(26);

    int i;
    for (int i = 1; i < N; i++)
    {
        int count = 0;
        int j = 0;
        for (j = 0; j < i; j++)
        {
            Lcheck[S[i] - 'a'] = true;
        }
        j++;

        for (; j < N; j++)
        {
            Rcheck[S[i] - 'a'] = true;
        }

        for (int l = 0; l < 26; l++)
        {
            if (Rcheck[l] == true && Lcheck[l] == true)
            {
                count++;
            }
        }

        ans = max(ans, count);
    }

    cout << ans << endl;
}