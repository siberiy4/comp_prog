#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    string S;
    cin>>S;

    if(N%2==0){
        cout<<-1<<endl;
        return 0;
    }

    int half=N/2;

    vector<char> aft={'c','a','b'};
    vector<char> bef={'a','c','b'};

    if(S[half]!='b'){
        cout<<-1<<endl;
        return 0;
    }

    for(int i=1;(i+half)<N;++i){
        if(S[half+i]!=aft[(i-1)%3]){
            cout<<-1<<endl;
            return 0;
        }
        if(S[half-i]!=bef[(i-1)%3]){
            cout<<-1<<endl;
            return 0;
        }
    }

    cout<<half<<endl;


    return 0;
}
