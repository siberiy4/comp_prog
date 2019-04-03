#include<iostream>
#include<vector>

using namespace std;

int main(){
    string S;
    cin>>S;

    if(S=="zyxwvutsrqponmlkjihgfedcba"){
        cout<<-1<<endl;
        return 0;
    }

    vector<bool> t(26,true);

    long tt=0;

    for(int i=0;i<S.size();++i){
        t[S[i]-'a']=false;
        if(S[i]=='z')tt=i;
    }


    if(S.size()==26){
        bool tes=true;

        for(int i=tt+2;i<S.size();++i){
            if(S[i-1]<S[i]){
                tt=i;
            }
        }

        
            for(int i=S.size()-1;i>=tt;--i){
                t[S.back()-'a']=true;
                S.pop_back();
            }
            for(int i=0;i<26;++i){
                if((S[tt-1]-'a')<i&&t[i]){
                    S[tt-1]='a'+i;
                    break;
                }
            }

            cout<<S<<endl;
            return 0;
            
        
    }




    for(int i=0;i<26;++i){
        if(t[i]){
            S+=('a'+i);
            break;
        }
    }

    cout<<S<<endl;

}