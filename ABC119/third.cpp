#include<bits/stdc++.h>
using namespace std;

int main(){
    long long N;
    int A,B,C;
    long long ans=0;
    cin>>N;
    cin>>A>>B>>C;
    vector<int> take(N);
    for(auto &x:take){
        cin>>x;
    }

    for(int i=0;i<take.size();++i){
        if(A==take[i]){
            A=0;
            take.erase(take.begin()+i);
            i--;
        }else if(B==take[i]){
            take.erase(take.begin()+i);
            B=0;
            i--;
        }else if(C==take[i]){
            take.erase(take.begin()+i);
            C=0;
        i--;
        }
    }
    if(A==0&&B==0&&C==0){
        cout<<0<<endl;
        return 0;
    }

    sort(take.begin(),take.end());
    vector<int> moku;
    if(A!=0)moku.push_back(A);
    if(B!=0)moku.push_back(B);
    if(C!=0)moku.push_back(C);

    sort(moku.begin(),moku.end());

    if(moku[0]<take[0]){
        ans+=(take[0]-moku[0]);
        moku.erase(moku.begin());
        take.erase(take.begin());
    }

    if(!moku.empty()&&moku[0]<take[0]){
        ans+=(take[0]-moku[0]);
        moku.erase(moku.begin());
        take.erase(take.begin());
    }
    if(!moku.empty()&&moku[0]<take[0]){
        ans+=(take[0]-moku[0]);
        moku.erase(moku.begin());
        take.erase(take.begin());
    }

    vector<pair<int,int>> cost;

    for(int i=0;i<take.size();++i){
        cost.push_back({take[i],0});
    }

    vector<int> sum(take.size());


    for(int m=0;m<take.size();++m){ 
        for(int i = 0; i < take.size(); i++)
        {
            for(int k=i+1;k<take.size();++k){
                cost.push_back({take[i]+take[k],10});
            }
        }
        
        for(int i=0;i<cost.size();++i){
            if(){}
        }
    }


    cout<<ans<<endl;
}