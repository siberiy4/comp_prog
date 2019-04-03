#include<bits/stdc++.h>

using namespace std;


int main(){
    long long N,Q;
    cin>>N>>Q;

    string S;
    cin>>S;

    vector<char> lef;
    vector<char> rig;


    for(long long i=0;i<Q;++i){
        char t,d;
        cin>>t>>d;
        if(d=='L'){
            lef.push_back(t);
        }else
        {
            rig.push_back(t);
        }
        
    }

    long long ans=N;
    vector<long long> ch(N,1);


    if(lef.size()<rig.size()){ 
        for(long long i=0;i<lef.size();++i){

            for(long long k=0;k<N;++k){
                if(S[k]==lef[i]){
                    if(k==0){
                        ans-=ch[k];
                    }else{
                        ch[k-1]+=ch[k];
                    }
                    ch[k]=0;
                }

                if(ans==0){
                    cout<<0<<endl;
                    return 0;
                }
            }

        }

        for(long long i=0;i<rig.size();++i){

            for(long long k=N-rig.size()-1+i;k<N;++k){
                if(S[k]==rig[i]){
                    if(k==N-1){
                        ans-=ch[k];
                    }else{
                        ch[k+1]+=ch[k];
                    }
                    ch[k]=0;
                }
                if(ans==0){
                    cout<<0<<endl;
                    return 0;
                }
            }
        }
    }else{/*
        for(long long i=0;i<rig.size();++i){

            for(long long k=0;k<N;++k){
                if(S[k]==rig[i]){
                    if(k==N-1){
                        ans-=ch[k];
                    }else{
                        ch[k-1]+=ch[k];
                    }
                    ch[k]=0;
                }

                if(ans==0){
                    cout<<0<<endl;
                    return 0;
                }
            }

        }

        for(long long i=0;i<lef.size();++i){

            for(long long k=N-lef.size()-1+i;k<N;++k){
                if(S[k]==lef[i]){
                    if(k==0){
                        ans-=ch[k];
                    }else{
                        ch[k+1]-=ch[k];
                    }
                    ch[k]=0;
                }
                if(ans==0){
                    cout<<0<<endl;
                    return 0;
                }
            }
        }
*/
    }


    if(ans==0){
        cout<<0<<endl;
    }else{
        cout<<ans<<endl;
    }


}