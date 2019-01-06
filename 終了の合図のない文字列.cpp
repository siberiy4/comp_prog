#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M,count=-1,ans=0;
    char s[200005];
    int i=0;


    cin>>s;

    M=strlen(s);
    for(int i=0;i<M;i++){
        if(s[i]=='A'&&count<0)count=i;
        if(s[i]=='Z'){
            ans=i+1;
        }
    }



        cout<<ans-count<<endl;

}