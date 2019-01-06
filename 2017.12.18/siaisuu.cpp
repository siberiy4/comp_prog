#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M,syutuzyousya=0,siaisu=0;
    vector<int> a(300);

    cin>>N;
    cin>>M;

    for(int i=0;i<M;i++){
        cin>>a[i];
    }

    syutuzyousya=N-M;

    while(syutuzyousya!=1&&syutuzyousya>0){
        siaisu=siaisu+syutuzyousya/2;
        syutuzyousya=syutuzyousya/2+syutuzyousya%2;
    }

    cout<<siaisu<<endl;

}