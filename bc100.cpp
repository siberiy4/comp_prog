#include<bits/stdc++.h>
using namespace std;
int main(){
    int D = 0, N = 0,M=0;
    long long ans = 0;
    long long tmp = 0;
    cin >> N >> M;

    vector<long long> kirei(N);
    vector<long long> azi(N);
    vector<long long> ninki(N);
    vector<long long> sum(8);
    long long pkirei = 0, pazi = 0, pninki = 0;
    long long nkirei = 0, nazi = 0, nninki = 0;
    for (int i = 0; i < N;i++){
        cin >> kirei[i] >> azi[i] >> ninki[i];
    }

    sort(kirei.begin(), kirei.end());
    sort(azi.begin(), azi.end());
    sort(ninki.begin(), ninki.end());

    for (int i = 0; i < M; i++){
        pkirei += kirei[N - 1 - i];
        pazi += azi[N - 1 - i];
        pninki += ninki[N - 1 - i];

        nkirei += kirei[i];
        nazi += azi[i];
        nninki += ninki[i];
    }

    sum[0] = pkirei  + pazi  + pninki ;
    sum[1] = pkirei  + pazi  + abs(nninki) ;
    sum[2] = pkirei  + abs(nazi)  + pninki ;
    sum[3] = pkirei  + abs(nazi)  + abs(nninki) ;
    sum[4] = abs(nkirei)  + pazi  + pninki ;
    sum[5] = abs(nkirei)  + pazi  + abs(nninki) ;
    sum[6] = abs(nkirei)  + abs(nazi)  + pninki ;
    sum[7] = abs(nkirei)  + abs(nazi)  + abs(nninki) ;

    ans = *max_element(sum.begin(), sum.end());

    cout << ans << endl;

}