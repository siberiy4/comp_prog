#include<bits/stdc++.h>
#include<cmath>
using namespace std;



int main(){
    int a,b,c ,ans,kaketa, sqo;
    cin >>a>>b;
    c=b;

    int i=0;

    while(c>0){
        i++;
        c=c/10;
    }

    kaketa=pow(10,i);

    ans=a*kaketa+b;


        sqo=sqrt(ans);

    if(ans==sqo*sqo)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;

}