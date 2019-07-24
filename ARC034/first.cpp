#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin>>N;
    double ans=0;
    for(int i=0;i<N;++i){
        vector<double> ten(5);
double tmp=0;
        for(auto &x:ten){
            cin>>x;
        }
        ten[4]=ten[4]*11/90;

        tmp=ten[0]+ten[1]+ten[2]+ten[3]+ten[4];
        ans=max(ans,tmp);
    }

    printf("%.6f",ans);
}

