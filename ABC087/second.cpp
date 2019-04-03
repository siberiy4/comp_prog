#include<iostream>
using namespace std;

int main(){
    int A,B,C;
    cin>>A>>B>>C;
    long X;
    cin>>X;

    long long ans=0;
    for(int i = 0; i <= A; i++)
    {
        for(int k = 0; k <= B; k++)
        {
            for(int m = 0; m <= C; m++)
            {
                if((500*i)+(100*k)+(50*m)==X)ans++;
            }
            
        }
        
    }

    cout<<ans<<endl;
    
}