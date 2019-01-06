#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main(){
    int N,okiba, ans=0;
    vector<int> t(100004);
    vector<int> x(100004);
    vector<int> y(100004);

    t[0]=0;
    y[0]=0;
    x[0]=0;

        cin>>N;

        for(int i=1;i<=N;i++){
            cin>>t[i]>>x[i]>>y[i];
        }
        for(int i=1;i<=N;i++){
                    
            okiba=abs(x[i]-x[i-1])+abs(y[i]-y[i-1]);


            if((t[i]-t[i-1])%2==1&&okiba%2==0){
                ans=1;
                break;
            }

            if(t[i]-t[i-1]<okiba){
                ans=1;
                break;
            }
        }

    if(ans==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }



    return 0;

}