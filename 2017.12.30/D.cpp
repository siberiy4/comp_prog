#include<bits/stdc++.h>
using namespace std;
int main(){
    int Q,count=0;
    vector<int> l(100005);
    vector<int> r(100005);
    vector<int> ans(100005);
    vector<int> prime(100005);

    cin>>Q;

    for(int i=0;i<Q;i++){
        cin>>l[i];
        cin>>r[i];
        for(int k=l[i];k<=r[i];k++){
            for(int j=2;j<=k/2+1;j++){
                if(k%j==0){
                    count++;
                }
            }
            for(int j=2;j<=(k+1)/2+1;j++){
                if((k+1)%j==0){
                    count++;
                }
            }

            if(count==0){
                ans[i]++;
            }
            count=0;
        }
    }

    for(int i=0;i<Q;i++){
        cout<<ans[i]<<endl;
    }



}