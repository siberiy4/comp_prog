#include<iostream>
#include<string>

using namespace std;


int main(){
    string S;
    long long ans=0;
    cin>>S;
    while(1){ 
        if(S[0]=='W')S.erase(S.begin());
        else break;
    
    }
    string tm(S.rbegin(),S.rend());
    while(1){ 
        if(tm[0]=='B')tm.erase(tm.begin());
        else break;
    
    }
    
    for(int k=0;k<tm.size();++k){
        if(tm[k]=='B'){
            ans+=k;
            tm.erase(tm.begin()+k);
            --k;
        }
    }

    cout<<ans<<endl;

}