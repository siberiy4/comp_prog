#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N;
cin>>N;
    vector<string>  v(N);

    for (auto &x : v)
    {
        cin>>x;
    }


    long r=0,o=0;

for (int i = 0; i < N; i++)
{
    for (int k = 0; k < N; k++)
    {
      
        if(v[i][k]=='B'){
            o++;
        }
        if(v[i][k]=='R'){
            r++;
        }
    }
    
}



    if(r==o){
        cout<<"DRAW"<<endl;
    }else if (r<o)
    {
        cout<<"AOKI"<<endl;
    }else{
        cout<<"TAKAHASHI"<<endl;
    }
    
    
    


}