#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N;
    long long ans=0;
    string S;
    cin>>N>>S;

    vector<long> vec;

    long i=0;

    while (i<N)
    {   
        long black=0,white=0;;
        while (S[i]=='#')
        {
            black++;
            i++;
            if(i>=N)break;
        }
        while (S[i]=='.')
        {
            white++;
            i++;
            if(i>=N)break;
        }
        if(!black||!white){ 

        }else{ 
            vec.push_back(black);
            vec.push_back(white);
        }
    }
    

bool wh=true;

    for(long i=0;i<vec.size();i+=2){
        if(vec[i]==0||vec[i+1]==0){

        }else{
            if(wh){
                if(vec[i]<=vec[i+1]){
                    ans+=vec[i];
                }else{
                    ans+=vec[i+1];
                    wh=false;
                }
                
            }else{
                ans+=vec[i+1];
            }
        }
    }

wh=true;

    for(long i=0;i<vec.size();i+=2){
        if(vec[i]==0||vec[i+1]==0){

        }else{
            if(wh){
                if(vec[i]<=vec[i+1]){
                    ans+=vec[i];
                }else{
                    ans+=vec[i+1];
                    wh=false;
                }
                
            }else{
                ans+=vec[i+1];
            }
        }
    }

    cout<<ans<<endl;
}