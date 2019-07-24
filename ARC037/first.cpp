#include<iostream>

using namespace std;

int main(){
    int N;
    long ans=0;
    int tmp;

    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>tmp;

        if(tmp<80){
            ans+=(80-tmp);
        }
    }

    cout<<ans<<endl;
    
}