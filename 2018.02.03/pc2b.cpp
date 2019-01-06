#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int N;
    vector<long long> suretu(10005);
    long long tmp;
    int ans=0;
    int size;
    int i=0;

    cin>>N;

    for(i=0;i<N;i++){
        cin>>suretu[i];
    }
    for(int i=0;i<N;i++){
        cin>>tmp;
        suretu[i]=suretu[i]-tmp;
    }

    size=i;

    i=0;
    while(1){ 
        if(suretu[i]==0){ 
            i++;
        }else if(suretu[i]>0){
            suretu[i]=suretu[i]-1;
            suretu[i+1]=suretu[i+1]+2;
        }else if(suretu[i]%2==0&&suretu[i]<0){
            suretu[i]=suretu[i]+2;
            suretu[i+1]=suretu[i+1]-1;
        }else{
            suretu[i]++;
        }

        if(suretu[size]!=0||suretu[size+1]!=0){
            break;
            ans=1;
        }
        if(i==size)break;
    }

    if(ans==0&&suretu[size]==0){ 
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


}