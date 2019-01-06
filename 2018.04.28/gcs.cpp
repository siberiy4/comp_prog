#include<bits/stdc++.h>
using namespace std;

int main(){
    long N=0,a=0,b=0,c=0,ans=0;
    long long sum;
    scanf("%ld",&N);

    vector<long long> array(N);

    for(int i=0;i<N;i++){
        scanf("%lld",&array[i]);
    }
    
    for(int i=0;i<=(N+1)/2;i++){
        sum=0;
        int k=i;
        for(;k<N;k++){
            sum+=array[k];
            if(sum==0)++ans;
        cout<<sum<<" "<<ans<<" ";

        }
if(i!=(N+1)/2){ 
            sum=0;
            k=(N+1)/2+i;            
        for(;k<N;k++){
            sum+=array[k];
            if(sum==0)++ans;
        cout<<sum<<" "<<ans<<" ";
            
        }

        
}
    }




    printf("%ld\n",ans);
}