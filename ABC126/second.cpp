#include <bits/stdc++.h>

using namespace std;

int main() {

    long long N, M, A, B, C, D;
    long long ans = 0;
    string S;

    cin >> N;
    A = N / 100;
    B = N % 100;

    if(A <= 12 && B <= 12&&A>0&&B>0) {
        cout << "AMBIGUOUS" << endl;
    } else if(A <= 12&&A>0) {
        cout << "MMYY" << endl;
    } else if(B <= 12&&B>0) {
        cout << "YYMM" << endl;
    }else{
        cout<<"NA"<<endl;
    }

}