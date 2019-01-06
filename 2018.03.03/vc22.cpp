#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,tmp=0;
    int ans=0;
    deque<int> card;
    int hako[2]={};



    cin>> N;

    for(int i=0;i<N;i++){
        cin>>tmp;
        card.push_back(tmp);
    
    
    }

    ans=ans+card[0]/2;


    for(int i=1;i<N-1;i++){
        ans=ans+card[i]/2;  
        if(card[i]%2==1&&card[i+1]>0&&card[i+1]%2==1){
            ans++;
            card[i+1]--;
        }
        if(card[i]%2==1&&card[i-1]>0&&card[i-1]%2==1){
            ans++;
            card[i-1]--;
        }
    }

    ans=ans+card[N-1]/2;

    cout<<ans<<endl;

}