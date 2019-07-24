#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> T(N);

    for (auto &x : T)
    {
        cin>>x;
    }
    int ans=1e9;
    for (int i = 0; i < 1<<N; i++)
    {
        int tmp=0,kem=0;
        for (int k = 0; k < 4; k++)
        {
            if(1<<k&i){
                tmp+=T[k];
            }else{
                kem+=T[k];
            }
        }
        ans=min(ans,max(tmp,kem));
        
    }
    
    


    cout<<ans<<endl;
}