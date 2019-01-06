#include<bits/stdc++.h>
using namespace std;

int main(){
    int N=0,zen=0,zenzen=0,ima=0;
    int a=0,b=0;
    bool check=false;

    cin>>a>>b;

vector<string> draw(a);
    
    for(auto&x: draw){
        cin>>x;
    }



    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(draw[i][j]=='#'){ 
                check=false;
                if(i>0&&draw[i-1][j]=='#')check=true;
                if(j>0&&draw[i][j-1]=='#')check=true;
                if(j<b-1&&draw[i][j+1]=='#')check=true;
                if(i<a-1&&draw[i+1][j]=='#')check=true;
                
                if(!check){ 
                    cout<<"No"<<endl;
                    return 0;
                }
            }
        }
    }


    cout<<"Yes"<<endl;


}
