#include<iostream>
using namespace std;


int main(){
    int N;
    string S;
    string f="TAKAHASHIKUN",s="Takahashikun",t="takahashikun";
    cin>>N;
    int cnt=0;
    for (int i = 0; i < N; i++)
    {
        cin>>S;
        if(i==N-1){
            S.erase(S.begin()+S.size()-1);
        }
        if(S==f||S==s||S==t){
            cnt++;
        }
    }

    cout<<cnt<<endl;
    
}
