#include<iostream>

using namespace std;

int main(){
  string N,M;
  bool eq=true;
  cin>>N>>M;
  
    if(N.size()>M.size()){
        cout<<"GREATER"<<endl;;
        return 0;
    }
    if(N.size()<M.size()){
        cout<<"LESS"<<endl;
        return 0;
    }

  for(int i=0;i<N.size();++i){ 
    if(N[i]>M[i]){
        cout<<"GREATER"<<endl;;
        return 0;
    }
    if(N[i]<M[i]){
        cout<<"LESS"<<endl;
        return 0;
    }
  }
    cout<<"EQUAL"<<endl;;
}