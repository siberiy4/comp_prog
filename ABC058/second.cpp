#include<iostream>
using namespace std;

int main(){
  string S,T;
  cin>>S>>T;
  for(int i = 0; i < S.size(); i++)
  {
      cout<<S[i];
      if(i<T.size()){
          cout<<T[i];
      }
  }
  
  cout<<endl;
}