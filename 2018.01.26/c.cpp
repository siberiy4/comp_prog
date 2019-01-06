#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    string Houko;
    vector<int> Saikoro={1,5,3,2,4,6};
    
    cin>>n;
    
    for(int i=0;i<n;i++){ 
        cin>>Houko;

        if(Houko=="North"){
            swap(Saikoro[1],Saikoro[0]);
            swap(Saikoro[0],Saikoro[3]);
            swap(Saikoro[3],Saikoro[5]);
        }   

        if(Houko=="East"){
            swap(Saikoro[2],Saikoro[0]);
            swap(Saikoro[0],Saikoro[4]);
            swap(Saikoro[4],Saikoro[5]);
        }   

        if(Houko=="South"){
            swap(Saikoro[3],Saikoro[0]);
            swap(Saikoro[0],Saikoro[1]);
            swap(Saikoro[1],Saikoro[5]);
        }   
        if(Houko=="West"){
            swap(Saikoro[4],Saikoro[0]);
            swap(Saikoro[0],Saikoro[2]);
            swap(Saikoro[2],Saikoro[5]);
        }   




    ans=ans+Saikoro[0];
    }

cout<<ans<<endl;

}