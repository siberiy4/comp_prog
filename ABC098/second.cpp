#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    int N;
    string S;
    cin>>N>>S;
    int ans=0;
    for(int i=1;i<N;++i){
        string f(S.begin(),S.begin()+i);
        string e(S.begin()+i,S.end());

        int tmp=0;
        vector<bool> vec(26,true);

        for(int k=0;k<f.size();++k){
            for(int m=0;m<e.size();++m){
                if(f[k]==e[m]&&vec[f[k]-'a']){
                    tmp++;
                    vec[f[k]-'a']=false;
                }
            }
        }

        ans=max(ans,tmp);
    }


    cout<<ans<<endl;
}
