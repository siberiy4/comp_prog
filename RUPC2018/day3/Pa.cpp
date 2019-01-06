#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0,Q=0,t=0,x=0,d=0;
    int flag=0;


    vector<int> apple(1005);
    vector<int> capa(1005);


    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>capa[i];
    }

    cin>>Q;

    for(int i=0;i<Q;i++){
        cin>>t>>x>>d;

        if(t==1){
            apple[x]+=d;
            if(apple[x]>capa[x]){
                if(flag==0)flag=x;
            }else{
                 
            }
        }else{
            apple[x]-=d; 
            if(apple[x]<0){
                if(0==flag)flag=x;             
            }else{
            }
        }
    }

        cout<<flag<<endl;

    return 0;
}