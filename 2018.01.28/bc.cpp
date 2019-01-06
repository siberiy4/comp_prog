#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    int gesum=0,zyosum=0;
    int tamesi,ans;
    vector<int> ge(105);
    vector<int> zyo(105);

    cin>>N;

    for(int i=0;i<N;i++){
        cin>>zyo[i];
        zyosum=zyosum+zyo[i];
    }
    gesum=zyo[0];

    for(int i=0;i<N;i++){
        cin>>ge[i];
        gesum=gesum+ge[i];
    }
    zyosum=zyosum+ge[N-1];

    tamesi=zyosum;
    if(zyosum>gesum){
        ans= zyosum;
    }else{
        ans=gesum;
    }


   for(int i=N-1;i>0;i--){
        tamesi=tamesi-zyo[i]+ge[i-1];
        if(ans<tamesi)ans=tamesi;

    }

    cout<<ans<<endl;

}

