#include<iostream>

using namespace std;

int main(){
  int N;
  long ans=1;
  cin>>N;
  
  for(int i=2;i<=N;++i){
    ans+=i;
  }
  
  
  cout<<ans<<endl;
  
}
