#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=0;
    int ans,check;

    cin>>n;
    check=n;
    vector<int> given(n);
    ans=n;
    vector<int> count(n);

    for(auto &x:given){
        cin>>x;
    }

    for(int i=1;i<=n;i++){
        ans=0;
        for(int j=0;j<n;j++){ 
            if(given[i]==check){
                check++;
                ans++;
            }
        }
        count[i]=ans;
    }

    ans=*max_element(count.begin(),count.end());

    cout<<ans<<endl;

}