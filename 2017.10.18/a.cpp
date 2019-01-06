#include <iostream>  // 入出力ストリームを利用
#include <vector>    // vectorを利用
using namespace std; // std名前空間を利用


struct Tuple{
    int x;
    int y;
};

struct Tuple3{
    int z1;
    int z2;
    int z3;

};
int main(){
    int a=1,b=2,c=0;

    Tuple pon={4, 2};
    Tuple pei={3, 4};

    Tuple3 z={5,6,7};


    z.z3=c;

    
    
    cout << pon.x <<endl;


}