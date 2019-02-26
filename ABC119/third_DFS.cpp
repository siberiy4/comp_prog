#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

const int INF =1<<29;

int N;
vector<int> L;//候補
vector<int> A(3);//竹を見る

//sums 選んだ竹の総和
//nums 選んだ竹の数

int rec(vector<int> sums,vector<int> nums ,int id){
    
    if(id==N){//すべての竹を見た時
        for(int i=0;i<3;++i){
            if(nums[i]==0){
                //竹を一本も使っていなければコストを最大にして除外
                return INF;
            }
        }

        long long score=0;
        //それぞれのスコアを計算

        for(int i=0;i<3;++i){
            score+=abs(sums[i]-A[i]);//目標の竹との差を見ていく
            score+=(nums[i]-1)*10;//合体したコスト
        }
        return score;
    }

    //以下 竹を見ている途中

    int res = INF;

    //竹を採用するか
    res =min(res,rec(sums,nums,id+1));
    for(int i=0;i<3;++i){
        sums[i]+=L[id];
        nums[i]++;
        res=min(res,rec(sums,nums,id+1));
        sums[i]-=L[id];
        nums[i]--;
        
    }


    return res;

}


int main(){
    cin>>N;
    for(auto &x:A){
        cin>>x;
    }

    for(int i = 0; i < N; i++)
    {
        int tmp;
        cin>>tmp;
        L.push_back(tmp);
    }
    vector<int> sums(3,0),nums(3,0);
    cout<<rec(sums,nums,0)<<endl;
    
}