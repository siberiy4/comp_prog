#include<bits/stdc++.h>
using namespace std;

int main(){
    long N=0,a=0,b=0,c=0,ans=0;
    long long sum;
    scanf("%d",&N);

    vector<long long> array(N);

    for(auto &x : array){
        cin>>x;
    }
    
    for(int i=0;i<N;i++){
        sum=0;
        for(int k=i;k<N;k++){
            sum+=array[k];
            if(sum==0)++ans;
        }
    }



    printf("%d",ans);
}