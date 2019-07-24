#include<iostream>
#include<deque>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int cnt=1;
    deque<int> d(M);
    deque<int> ans;
    
    deque<bool> c(N,true);

    for (auto &x : d)
    {
        cin>>x;
    }

    for (auto i = d.rbegin(); i !=d.rend(); i++)
    {
        if (c[*i-1])
        {
        ans.push_back(*i);
        c[*i-1]=false;
            
        }
        
    }
    
    for (int i = 0; i < N; i++)
    {
        if(c[i]){
            ans.push_back(i+1);
        }
    }
    
    for (auto &x : ans)
    {
        cout<<x<<endl;
    }
    

    
}