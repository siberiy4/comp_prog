#include<iostream>

using namespace std;

int main()
{
    long N,Y;
    cin>>N>>Y;

    long sen=0,gosen=0,man=0;

    while(10000<Y){
        Y-=10000;
        man++;
    }
    while(5000<Y){
        Y-=5000;
        gosen++;
    }
    while(1000<Y){
        Y-=1000;
        sen++;
    }

    
}