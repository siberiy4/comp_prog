#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,nicount=0,kocount=0;
    int tmp,count=0,j=0,ans=0;
    vector<int> nikoniko(2600);
    cin>>s;
    tmp=s;
    while(tmp>0){
        nikoniko[count]=tmp%10;
        tmp=tmp/10;
        count++;
    }

    for(int i=count-1;i>0;i--){
        if(nikoniko[i]==2){
            nicount++;
        }
        if(nikoniko[i]==5){
            kocount++;
        }
        if(nikoniko[i]==5&&nikoniko[i-1]==2){
            if(kocount>nicount){
                ans=ans+nicount;
            }else{
                ans=ans+nicount;
            }
            cout<<ans<<endl;
            nicount=0;
            kocount=0;
        }
        if(i=1){
            if(nikoniko[0]==2){
                nicount++;
            }
            if(nikoniko[0]==5){
                kocount++;
            }

        }

    }

    if(kocount>nicount){
        ans=ans+nicount;
    }else{
        ans=ans+kocount;
    }

    if(ans==0){
        cout<<"-1"<<endl;
    }else{ 
    cout<<ans<<endl;
    }

}