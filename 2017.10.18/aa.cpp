#include<iostream>
#include<vector>
using namespace std;


struct Point {
    int x; // xという名前を付けている
    int y;
};
int main() {
    Point point = {5, 6};
    cout << point.x << endl; // 変数名.名前で値にアクセスできる
    point.x = 10;            // 書き換える事もできる
    cout << point.x << endl;
}