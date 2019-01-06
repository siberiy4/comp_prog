#include<bits/stdc++.h>
using namespace std;
int main(){
    long long X,Y;
    long long baisu;
    long long ans=0;

    cin>>X>>Y;

    for(int i=2;i<100000001;i++){
        baisu=i*X;
        if(baisu%Y!=0){
            ans=baisu;
            break;
        }
    }


    if(ans==0)ans=-1;


    cout<<ans<<endl;

}