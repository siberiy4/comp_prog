#include<iostream>

using namespace std;

int main(){
    long N;  cout<<"0";
    cin>>N;

  	cout<<"A";
  
    bool ok=true;
    for (int i = 0; i*i <= N; i++)
    {
        if(N%i==0)ok=false;
    }
  
  cout<<"B";
    if(ok){
        cout<<"Prime"<<endl;
        return 0;
    }
  cout<<"C";
    if(N%10!=5&&N%2==1){
        long tmp=N;
        long cnt=0;
        while (tmp!=0)
        {
            cnt+=tmp%10;
            tmp/=10;
        }
      cout<<"D";
        if (cnt%3!=0)
        {
            cout<<"Prime"<<endl;
        }
        
        
    }

    cout<<"Not Prime"<<endl;
}