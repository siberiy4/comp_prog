#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0,a=0,K=0,b=0,c=0,ans=0;
    string str;
    int mid;
    vector<int> retu(3);
    cin>>retu[0]>>retu[1]>>retu[2];
    cin>>K;

    sort(retu.begin(),retu.end());

    for(int i=0;i<K;i++){
        retu[2]*=2;
    }

    ans=retu[0]+retu[1]+retu[2];

    cout<<ans<<endl;

}
