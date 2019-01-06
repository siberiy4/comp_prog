#include<bits/stdc++.h> 
using namespace std;
int main(){
    int D;
    double A,B,ans,hogege;
        cin>>D>>B;

    A=D%12;

    hogege=A*60+B;

    ans=abs(hogege*0.5-B*6);

    if(ans>180)ans=360-ans;

    cout<<abs(ans)<<endl;
    
    return 0;

}
