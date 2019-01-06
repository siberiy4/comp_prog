#include<iostream>
#include<deque>


using namespace std;

int main(){
    int N;
    cin>>N;
    int x1=0,x2=0,x4=0;

    
    for(int i = 0; i < N; i++)
    {
        int res;
        cin>>res;

        if(res%4==0){
            x4++;
        }else if(res%2==0){
            x2++;
        }else{
            x1++;
        }
    }


    if(x2==0&&(x1==N/2||x4==N/2)){
        cout<<"Yes"<<endl;
    }else if(x1<=x4){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
}