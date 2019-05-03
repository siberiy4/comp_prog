#include<iostream>
using namespace std;
int main(){
    string S;
    int N;
    cin>>N>>S;
    double sum=0;
    for (auto &x : S)
    {
        sum+=('F'==x?0:'E'-x);
    
    }

    

    printf("%.15f\n",sum/N);
}