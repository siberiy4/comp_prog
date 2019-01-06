#include<iostream>
#include<vector>
#include<deque>

using namespace std;

int main(){
    int H,W,N;
    cin>>H>>W>>N;
    vector<vector<int>> color(H,vector<int>(W));

    deque<int> kind(N);

    for(auto &x:kind){
        cin>>x;
    }

    int now_color=0;
    for(int i=0;i<H;++i){
        if(i%2==0){
            for(int k=0;k<W;++k){
                color[i][k]=now_color+1;
                kind[now_color]--;
                if(kind[now_color]==0){
                    now_color++;
                }
            }
        }else{
            for(int k=W-1;k>=0;--k){
                color[i][k]=now_color+1;
                kind[now_color]--;
                if(kind[now_color]==0){
                    now_color++;
                }
            }
        }
    }


    for(int i=0;i<H;++i){
        for(int k=0;k<W;++k){
            cout<<color[i][k]<<" ";
        }
        cout<<endl;
    }

}