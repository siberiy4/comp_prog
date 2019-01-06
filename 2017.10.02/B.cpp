#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/foreach.hpp>

using namespace std;

int main(){
    int N;
    cin >>N;

    vector<int> A(N-1);

    for(int i = 0;i<N-1;i++){
        cin >>A[i];
    }
    std::sort(A.begin(),A.end(),std::greater<int>());

    cout << A[N-2] << endl;
    return 0;
}