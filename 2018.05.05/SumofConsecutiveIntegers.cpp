#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> array;
    int tmp=0,ans=0;
    int sum=0;
    cin>>tmp;
    while(tmp!=0){

        for(int i=1;i<tmp;i++){
            sum=0;
            for(int k=i;k<tmp;k++){
                sum+=k;
                if(sum==tmp){ 
                    ans++;
                }
                if(sum>tmp){
                    sum=0;
                    break;
                }
            }
        }
        cout<<ans<<endl;
        ans=0;
        cin>>tmp;

        
    }


}