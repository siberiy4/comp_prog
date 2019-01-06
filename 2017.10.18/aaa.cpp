#include<iostream>
#include<vector>
using namespace std;

struct Point{
    int h;
    int g;
};

struct Line{
    Point x;
    Point y;
};

int main(){
    Point a={5,4};
    Point b={7,8};
    Point c={8,9};

    Line t1;
    t1.x=a;
    t1.y=b;

    Line t2;
    t2.x=b;
    t2.y=c;

    Line t3;
    t3.x=c;
    t3.y=a;


    
}