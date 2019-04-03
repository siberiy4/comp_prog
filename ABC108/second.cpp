#include<iostream>

using namespace std;

int main(){
    pair<int,int> a,b;

    cin>>a.first>>a.second>>b.first>>b.second;
    int mx=b.second-a.second;
    int my=b.first-a.first;

    cout<<b.first-mx<<" "<<b.second+my<<" ";
    cout<<a.first-mx<<" "<<a.second+my;
    cout<<endl;

}