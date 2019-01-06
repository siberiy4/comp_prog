#include<bits/stdc++.h>
using namespace std;

    char cambas[50][50];
    bool nureru[50][50];
    bool nutta[50][50];



void dfs(int x,int y,int a, int b){
    if(x<0||a<=x||y<0||y<=y)return;
    if(cambas[x][y]!='#')return;

    nureru[x][y]=false;
        
    dfs( x+1, y, a,  b);
    dfs( x-1, y, a,  b);
    dfs( x, y+1, a,  b);
    dfs( x, y-1, a,  b);



}




int main(){
    int N=0,zen=0,zenzen=0,ima=0;
    bool ans=true;
    bool start_flag=true;
    int startx=0;
    int starty=0;
    string str;
    char tmp;

    cin>>a>>b;



    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>tmp;

            
        }
    }

    dfs(startx,starty,a,b);

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){            
            if(nutta[i][j]!=nureru[i][j]){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }

    cout<<"Yes"<<endl;


}
