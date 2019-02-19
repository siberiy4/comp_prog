#include<iostream>
#include<string>


using namespace std;

int main(int argc, char const *argv[])
{
    string S;
    cin>>S;


    for(int i=0;i<S.size();++i){
        if(S[S.size()-1-i]=='h'){
            if(S.size()-2-i>=0&&S[S.size()-2-i]=='c'){
                i++;
            }else{
            cout<<"NO"<<endl;
            return 0;
            }
        }
        else if(S[S.size()-1-i]=='o'){
            continue;
        }
        else if(S[S.size()-1-i]=='k'){
            continue;
            }
        else if(S[S.size()-1-i]=='u'){
            continue;
            }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

    return 0;
}
