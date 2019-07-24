#include<bits/stdc++.h>

using namespace std;

int H,W;
vector<vector<int>> masu(1000,vector<int>(1000));

void isSiro(int nowH,int nowW,int cnt){
    
    if(masu[nowH][nowW]==0||masu[nowH][nowW]>cnt){
        masu[nowH][nowW]=cnt;
    if(nowH>0&&(masu[nowH-1][nowW]==0||masu[nowH-1][nowW]>cnt)){
        isSiro(nowH-1,nowW,cnt+1);
    }else if (nowH<H-1&&(masu[nowH+1][nowW]==0||masu[nowH+1][nowW]>cnt))
    {
        isSiro(nowH+1,nowW,cnt+1);
    }else if (nowW>0&&(masu[nowH][nowW-1]==0||masu[nowH][nowW-1]>cnt))
    {
        isSiro(nowH,nowW-1,cnt+1);
    }else if (nowW<W-1&&(masu[nowH][nowW+1]==0||masu[nowH][nowW+1]>cnt))
    {
        isSiro(nowH,nowW+1,cnt+1);
    }
    }

for(int i=0;i<H;++i){
    for (int k = 0; k < W; ++k)
    {
        cout<<masu[i][k];
    }
    cout<<endl;
}
    cout<<endl;


}

void isKuro(int nowH,int nowW){

    if(nowH>0&&masu[nowH-1][nowW]!=-1){
        isSiro(nowH-1,nowW,1);
    }else if (nowH<H-1&&masu[nowH+1][nowW]!=-1)
    {
        isSiro(nowH+1,nowW,1);
    }else if (nowW>0&&masu[nowH][nowW-1]!=-1)
    {
        isSiro(nowH,nowW-1,1);
    }else if (nowW<W-1&&masu[nowH][nowW+1]!=-1)
    {
        isSiro(nowH,nowW+1,1);
    }



}




int main(){
    cin>>H>>W;

for(int i=0;i<H;++i){
    for (int k = 0; k < W; ++k)
    {
        char tmp;
        cin>>tmp;
        if(tmp=='#'){
            masu[i][k]=-1;
        }
    }
    
}


    for(int i=0;i<H;++i){
        for(int k=0;k<W;++k){
            if(masu[i][k]==-1){

                isKuro(i,k);
            }

        }
    }



    int max=0;
    
for(int i=0;i<H;++i){
    for (int k = 0; k < W; ++k)
    {
        if(masu[i][k]!=-1&&masu[i][k]>(max)){
            max=masu[i][k];
            
        }
    }
    
}

for(int i=0;i<H;++i){
    for (int k = 0; k < W; ++k)
    {
        cout<<masu[i][k];
    }
    cout<<endl;
}

cout<<max<<endl;


}