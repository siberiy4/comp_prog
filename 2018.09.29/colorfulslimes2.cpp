#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin>>N;
    vector<int> slime(N);
    vector<bool> coler(10001);

    int ans=0;

    for(auto &x:slime){
        cin>>x;
        coler[x]=true;
    }
    
    for(int i=1;i<N;i+=2){
        if(slime[i-1]==slime[i]||i!=N-1&&slime[i]==slime[i+1]){
            for(int k=1;k<=10000;k++){
                if(k!=slime[i-1]&&k!=slime[i+1]&&!coler[k]){
                    slime[i]=k;
                }
            }
            ans++;
        }
    }

    cout<<ans<<endl;
    
    return 0;
}
