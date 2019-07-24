#include <iostream>

using namespace std;

int main() {
    string S;

    cin >> S;
    int i = 0;
    while(S[i] != 'I' && S[i] != 'i') {
        ++i;
        if(i == S.size()) {
            cout << "NO" << endl;
            return 0;
        }
    }
    while(S[i] != 'C' && S[i] != 'c') {
        ++i;
        if(i == S.size()) {
            cout << "NO" << endl;
            return 0;
        }
    }
    while(S[i] != 'T' && S[i] != 't') {
        ++i;
        if(i == S.size()) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}