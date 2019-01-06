#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n=0,ans=0,tmp=0,sum=0;
    bool flag=true;
    cin>>n;
    vector<int> Cumulative(n);
    vector<int> array(n);

    int seifu[2]={};

    for(int i=0;i<n;i++){
        cin>>array[i];
    }


    sum=array[0];

    if(array[0]<0){
        flag=true;
    }else{
        flag=false;
    }




    for(int i=1;i<n;i++){     
            sum+=array[i];

        if(flag){
            tmp=sum;
            if(tmp<0){ 
                ans+=abs(tmp)+1;
                sum=1;
            }
            flag=false;
        }else{
            if(tmp>0){ 
                ans+=abs(tmp)+2;
                sum=-1;
            }            
            flag=true;
        }

    }

    cout<<ans<<endl;




}