#include<iostream>
#include<vector>

using namespace std;
long long  ans=0;
vector<string> str;

long long   dfs(long long  hi,long long  we,long long  maxhi,long long  maxwe,bool black,long long  backh,long long  backw){
    long long  cnt=0;

    if(black){
        if(hi>0&&str[hi-1][we]=='.'&&!(hi==backh&&we==backw)){
            cnt++;
            dfs(hi-1,we,maxhi,maxwe,false,hi,we);
        }
        if(we>0&&str[hi][we-1]=='.'&&!(hi==backh&&we==backw)){
            cnt++;
            dfs(hi,we-1,maxhi,maxwe,false,hi,we);
        }
        if(hi<maxhi-1&&str[hi+1][we]=='.'&&!(hi==backh&&we==backw)){
            cnt++;
            dfs(hi+1,we,maxhi,maxwe,false,hi,we);
        }
        if(we<maxwe-1&&str[hi][we+1]&&!(hi==backh&&we==backw)){
            cnt++;
            dfs(hi,we+1,maxhi,maxwe,false,hi,we);
        }
    }
    
    
    else{
        if(hi>0&&str[hi-1][we]=='#'&&!(hi==backh&&we==backw)){
            cnt++;
            dfs(hi-1,we,maxhi,maxwe,true,hi,we);
        }
        if(we>0&&str[hi][we-1]=='#'&&!(hi==backh&&we==backw)){
            cnt++;
            dfs(hi,we-1,maxhi,maxwe,true,hi,we);
        }
        if(hi<maxhi-1&&str[hi+1][we]=='#'&&!(hi==backh&&we==backw)){
            cnt++;
            dfs(hi+1,we,maxhi,maxwe,true,hi,we);
        }
        if(we<maxwe-1&&str[hi][we+1]&&!(hi==backh&&we==backw)){
            cnt++;
            dfs(hi,we+1,maxhi,maxwe,true,hi,we);
        }
    }

    if(cnt>1){ 
        ans+=(cnt-1);
    }

    return 0;

}



int  main(){
    long long  H,W;
    cin>>H>>W;





    for(long long  i=0;i<H;++i){
        string ss;
        cin>>ss;
        str.push_back(ss);

    }



    for(long long  i=0;i<H;++i){


        for(long long  k=0;k<W;++k){


            if(str[i][k]=='#'){ 
                if(i>0&&str[i-1][k]=='.'){
                    dfs(i-1,k,H,W,false,i,k);
                    ans++;
                }
                if(k>0&&str[i][k-1]=='.'){
                    dfs(i,k-1,H,W,false,i,k);
                    ans++;
                }
                if(i<H-1&&str[i+1][k]=='.'){
                    dfs(i+1,k,H,W,false,i,k);
                    ans++;
                }
                if(k<W-1&&str[i][k+1]=='.'){
                    dfs(i,k+1,H,W,false,i,k);
                    ans++;
                }
            }
        }
    }



    cout<<ans<<endl;
}