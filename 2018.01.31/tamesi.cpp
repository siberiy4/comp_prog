#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M,X,Y,count=-1,ans=0;
    vector<int> a[100005];
    vector<int> b[100005];
    int i=0,j=0,hante=1;


    cin>>N>>M>>X>>Y;

    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0;i<M;i++){
        cin>>b[i];
    }


    while(1){
        if(hante=0&&i<N){
            while(1){
                if(a[i]>=b[j]+Y)break;
                i++;
            }
        }else if(j<M){
            while(1){
                if(a[i]+X<=b[j])break;
                //if(j=)
                j++;
            }
        }
        if(i==N-1&&j==M-1)break;
        ans++;
    }



        cout<<ans<<endl;

}