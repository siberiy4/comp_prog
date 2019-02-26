#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int N;
    vector<int> A(3);
    cin>>N;
    vector<int> L(N);
    for(auto &x:A){
        cin>>x;
    }
    for(auto &x:L){
        cin>>x;
    }
    int res =1<<29;


    vector<int> bit(3);
    for(bit[0]=1;bit[0]<(1<<N);++bit[0]){
            for(bit[1]=1;bit[1]<(1<<N);++bit[1]){
                //共通要素の排除
                if(bit[0]&bit[1])continue;
                for(bit[2]=1;bit[2]<(1<<N);++bit[2]){
                    if((bit[2]&bit[0])||(bit[2]&bit[1]))continue;

                    //それぞれの長さと使った竹の本数
                    vector<int> sums(3,0),nums(3,0);

                    for(int i=0;i<N;++i){
                        for(int j = 0; j < 3; j++)
                        {
                            if(bit[j]&(1<<i)){
                                sums[j]+=L[i];
                                nums[j]++;
                            }
                        }
                        
                    }

                    int score=0;
                    for(int i=0;i<3;++i){
                        score+=abs(sums[i]-A[i]);
                        score+=(nums[i]-1)*10;
                    }

                    res=min(res,score);
                    
                }

            }
            
    }

    cout<<res<<endl;

}