#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string S;
    cin>>S;

    long ans=0;
    long cnt=0;

    for (auto & x : S)
    {
        if(x=='A'||x=='T'||x=='G'||x=='C'){
            cnt++;
            ans=max(ans,cnt);
        }
        else
        {
            cnt=0;
        }
        
    }
    

    cout<<ans<<endl;
}