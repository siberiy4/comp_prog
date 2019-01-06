#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string S,T;
    cin>>S>>T;

    for(int i=0;i<S.size();++i){
        if(S[i]=='@'&&T[i]=='@'){

        }else if(S[i]=='@'){
            if(T[i]=='a'||T[i]=='t'||T[i]=='c'||T[i]=='o'||T[i]=='d'||T[i]=='e'||T[i]=='r'){

            }else{
            cout<<"You will lose"<<endl;
            return 0;
            }
        }else if(T[i]=='@'){
            if(S[i]=='a'||S[i]=='t'||S[i]=='c'||S[i]=='o'||S[i]=='d'||S[i]=='e'||S[i]=='r'){

            }else{
            cout<<"You will lose"<<endl;
            return 0;

            }
        }else if(S[i]==T[i]){

        }else{
            cout<<"You will lose"<<endl;
            return 0;
        }
    }

    std::cout << "You can win" << '\n';
}