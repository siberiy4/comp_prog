#include<iostream>
#include<deque>


using namespace std;

int main(){
    long T,N,M;
    cin>>T>>N;
    deque<int> tako(N);
for(auto& x : tako)
{
    cin>>x;
}






    cin>>M;
    for(long i = 0; i < M; i++)
    {
        long X;
        cin>>X;
        if(tako.empty()){
            cout<<"no"<<endl;
            return 0;
        }
    
        while(!tako.empty()){
            long now=tako.front();
            tako.pop_front();
            if(now<=X&&X<=now+T){
                break;
            }else
            {
                if(tako.empty()){
                    cout<<"no"<<endl;
                    return 0;
                }
            }
            
        }
        

    
    }
    
    cout<<"yes"<<endl;
    
}