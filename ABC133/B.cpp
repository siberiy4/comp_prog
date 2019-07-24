#include<iostream>
#include<vector>
#include<tuple>
#include<cmath>
using namespace std;

int main(){
    int N,D;
    cin>>N>>D;
    vector<vector<int>> vec(N,vector<int>(D));
    for (auto &x : vec)
    {
        for (auto &hoge : x)
        {
            cin>>hoge;
        }
        
    }

    int ans=0;

    for (int i = 0; i < N; i++)
    {
        bool ok=true;
        for(int m=i+1;m<N;++m){ 

            int sum=0;
            for (int k = 0; k < D; k++)
            {
                sum+=abs(vec[i][k]-vec[m][k])*abs(vec[i][k]-vec[m][k]);
            }
            for (int p = 0; p < 1000; p++)
            {
                if (sqrt(sum)==p)
                {
                    ans++;
                }
            
            }
            

        }
        
    }
    
    cout<<ans<<endl;
}