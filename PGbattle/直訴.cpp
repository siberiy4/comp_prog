#include<iostream>
#include<cmath>

using namespace std;


int main(int argc, char const *argv[])
{
    pair<double,double> a,b,c;

    cin>>a.first>>a.second>>b.first>>b.second>>c.first>>c.second;

    double ans=0;

    b.first-=a.first;
    b.second-=a.second;
    c.first-=a.first;
    c.second-=a.second;

    ans=abs(b.first*c.second-b.second*c.first)/2.0;

    printf("%.1lf\n", ans);

    return 0;
}


