#include<bits/stdc++.h>


using namespace std;

int main(){
    int N;
    cin>>N;

    vector< long > B(N);

    for(int i=0;i<N;++i){
        cin>>B[i];
    }

    vector<long> ans;


    while(!B.empty()){
        int same=0;
        bool check=false;
        for(int i=0;i<B.size();++i){
            if(B[i]==i+1){
                same=i;
                check=true;
            }
        }

        if(check){
            ans.push_back(B[same]);
            B.erase(B.begin()+same);

        }else{
            cout<<-1<<endl;
            return 0;
        }


    }

    for(int i=ans.size()-1;i>=0;--i){
        cout<<ans[i]<<endl;
    }
    


}