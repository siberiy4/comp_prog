#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int count=0,distance;
    int max=0,min=100000000;

    cin>>count;
    cin>>distance;

    for(int k=0;k<count;k++){ 
    int fare,riding_distance;
    cin>>riding_distance>> fare;
    int tuikakyori,tuikauntinn;
    cin>>tuikakyori>>tuikauntinn;

    for(;riding_distance<distance;fare+=tuikauntinn,riding_distance+=tuikakyori)

    if(min>fare)min=fare;
    else if(max<fare)max=fare;

    }

    cout<<min<<" "<<max<<endl;
}