#include<iostream>
#include<cmath>
#include<vector>
#include<cstddef>
#include<algorithm>
using namespace std;


int main(){
  int N,mai;
  long long way,ways;
  vector<int> A(N-1);

  for(int i=0;i<N;i++){
    cin >> A[i];
    }

    for(int i=0;i<N;i++){
        if(A[i]%2==0){
            mai=mai+2;
        }
        else{
            mai=mai+1;
        }
    }

    way=pow(3,N);
    ways=way-mai;

    cout << ways << endl;

    return 0;

}