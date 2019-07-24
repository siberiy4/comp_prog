#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N;
    cin>>N;

    vector<int> v(N);

    for (auto &x : v)
    {
        cin>>x;
    }
    int ans=0;
    for (int i = 1; i < N-1; i++)
    {
        if(v[i-1]>v[i]&&v[i]>=v[i+1]||v[i-1]<=v[i]&&v[i]<v[i+1]){
            ans++;
        }
    }

    cout<<ans<<endl;
    
    
}