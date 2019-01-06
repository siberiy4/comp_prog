#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,sum=0,average,ans=0,anssum=0;
    vector<int> zinko(105);
    double ave,ansave;


    cin>>N;

    for(int i=0;i<N;i++){
        cin>>zinko[i];
        sum=sum+zinko[i];
    }

    ave=(double)sum/N;
    average=(int)ave;



    int count=0;

    for(int j=0;j<N;j++){
        count++;
    anssum=anssum+zinko[j];
    ansave=(double)anssum/count;


        if(ansave==ave){
            ans=ans+count-1;
            anssum=0;
            count=0;
        }
    }


    if(average!=ave)ans=-1;
    if(0==ave)ans=0;
    cout<<ans<<endl;


}